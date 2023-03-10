/*
   Made by Jovonda Robinson 4/19/19
   Overview:
   In this project, you will collect the height and weight from a group of subjects
   in order to calculate BMI (Body Mass Index).
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "bmi.h"

///////////////////////////////////////////////////////////////
// helper functions

Person *createPerson(char *first, char *last, int height, int weight, Person *nextHeight, Person *nextWeight)
{
        Person *ptr=malloc(sizeof(Person));
        ptr->first=malloc(strlen(first)+1);
        strcpy(ptr->first, first);
        ptr->last=malloc(strlen(last)+1);
        strcpy(ptr->last, last);

        ptr->height=height;
        ptr->weight=weight;

        ptr->nextHeight=nextHeight;
        ptr->nextWeight=nextWeight;

        return ptr;
}
//This compares a person's height
int compareHeight(Person *pNew, Person*pExisting)
{
        //printf("This is the compareHeight function\n");
        if (pNew->height>pExisting->height) return -1;
        if (pNew->height<pExisting->height) return 1;

        if(pNew->weight > pExisting->weight)
                return 1;
        if(pNew->weight < pExisting->weight)
                return -1;

        return 1;
}
//This adds a person by height
PersonList *addHeight(Person *pNew, PersonList *list)
{
        if(list->headHeightList== NULL)
        {
                pNew->nextHeight=list->headHeightList;
                list->headHeightList=pNew;
                return list;
        }
        if(compareHeight(pNew, list->headHeightList)< 0)
        {
                pNew->nextHeight = list->headHeightList;
                list->headHeightList=pNew;
                return list;
        }
        for(Person * cur = list->headHeightList; cur!= NULL; cur = cur->nextHeight)
        {
                if(cur->nextHeight == NULL)
                {
                        cur->nextHeight = pNew;
                        return list;
                }
                if(compareHeight(pNew, cur->nextHeight) <0)
                {
                        pNew->nextHeight = cur->nextHeight;
                        cur->nextHeight = pNew;
                        return list;
                }
        }
        return NULL;
}
//This compares a person's weight
int compareWeight(Person *pNew, Person *pExisting)
{
        if (pNew->weight>pExisting->weight) return 1;
        if (pNew->weight<pExisting->weight) return -1;

        if(pNew->height > pExisting->height)
                return -1;
        if(pNew->height < pExisting->height)
                return 1;

        return 1;
}
//This adds a person by weight
PersonList *addWeight(Person *pNew, PersonList *list)
{
        if(list->headWeightList== NULL)
        {
                pNew->nextWeight=list->headWeightList;
                list->headWeightList=pNew;
                return list;
        }
        if(compareWeight(pNew, list->headWeightList)< 0)
        {
                pNew->nextWeight = list->headWeightList;
                list->headWeightList=pNew;
                return list;
        }
        for(Person * cur = list->headWeightList; cur!= NULL; cur = cur->nextWeight)
        {
                if(cur->nextWeight == NULL)
                {
                        cur->nextWeight = pNew;
                        return list;
                }
                if(compareWeight(pNew, cur->nextWeight) <0)
                {
                        pNew->nextWeight = cur->nextWeight;
                        cur->nextWeight = pNew;
                        return list;
                }
        }
        return NULL;
}
// This deletes a person from the height list
PersonList *deleteHeight(PersonList *list, char *first, char * last)
{
        if(strcmp(list->headHeightList->first, first) == 0)
        {
                if(strcmp(list->headHeightList->last, last) == 0)
                {
                        list->headHeightList = list->headHeightList->nextHeight;
                        return list;
                }
        }
        for(Person * cur = list->headHeightList; cur !=NULL; cur = cur->nextHeight)
        {
                if(strcmp(cur->nextHeight->first,first)==0)
                {
                        if(strcmp(cur->nextHeight->last,last)==0)
                        {
                                cur->nextHeight = cur->nextHeight->nextHeight;
                                return list;
                        }
                }
        }
        return NULL;
}
//This deletes a person from the weight list
PersonList *deleteWeight(PersonList *list, char *first, char *last)
{
        if(strcmp(list->headWeightList->first, first) == 0)
        {
                if(strcmp(list->headWeightList->last, last) == 0)
                {
                        list->headWeightList = list->headWeightList->nextWeight;
                        return list;
                }
        }
        for(Person * cur = list->headWeightList; cur !=NULL; cur = cur->nextWeight)
        {
                if(strcmp(cur->nextWeight->first,first)==0)
                {
                        if(strcmp(cur->nextWeight->last,last)==0)
                        {

                                cur->nextWeight = cur->nextWeight->nextWeight;
                                return list;
                        }
                }
        }
        return NULL;
}

///////////////////////////////////////////////////////////////


PersonList *add(PersonList *list, char *first, char *last, int height, int weight) {
        // make sure it does not already exist
        Person *ptr=search(list, first, last);
        if (ptr!=NULL) {
                printf("Error: %s %s already exists in the list\n", first, last);
                return list;
        }

        // allocate a new node
        Person *pNew=createPerson(first, last, height, weight, NULL, NULL);
        addWeight(pNew, list);
        addHeight(pNew, list);
        return list;

}

int size(PersonList *list)
{
        int count=0;
        for (Person *cur = list->headHeightList; cur != NULL; cur = cur->nextHeight)
                count++;
        return count;
}

void printByHeight(PersonList *list)
{
        for (Person *cur = list->headHeightList; cur != NULL; cur = cur->nextHeight)
                printf("%s %s: height=%d, weight=%d\n", cur->first, cur->last, cur->height, cur->weight);
}

void printByWeight(PersonList *list)
{
        for (Person *cur = list->headWeightList; cur != NULL; cur = cur->nextWeight)
                printf("%s %s: height=%d, weight=%d\n", cur->first, cur->last, cur->height, cur->weight);
}

Person *search(PersonList *list, char *first, char *last)
{
        for (Person *cur = list->headWeightList; cur != NULL; cur = cur->nextWeight)
        {
                if(strcmp(cur->first, first)==0)
                        if(strcmp(cur->last, last)==0)
                                return cur;
        }
        return NULL;
}

void updateName(PersonList *list, char *first, char *last, char *newFirst, char *newLast)
{
        Person *ptr=search(list, first, last);
        if(ptr == NULL)
        {
                printf("%s %s does not exist, try again", first, last);
        }
        for (Person *cur = list->headWeightList; cur != NULL; cur = cur->nextWeight)
        {
                if(strcmp(cur->first, first)==0)
                        if(strcmp(cur->last, last)==0)
                        {
                                strcpy(cur->first, newFirst);
                                strcpy(cur->last, newLast);
                        }
        }
}
//The remove still does not work
PersonList *removePerson(PersonList *list, char *first, char *last)
{
        Person *ptr=search(list, first, last);
        if(ptr == NULL)
        {
                printf("%s %s does not exist, try again", first, last);
                return list;
        }
        deleteWeight(list, first, last);
        deleteHeight(list, first, last);
        return list;
}
//Gives me issues with the name
PersonList *updateHeight(PersonList *list, char *first, char *last, int height)
{
        Person *ptr=search(list, first, last);
        if(ptr == NULL)
        {
                printf("%s %s does not exist, try again", first, last);
                return list;
        }
        list = removePerson(list, first, last);
        list = add(list,first, last, height, ptr->weight);
        return list;

}
//Gives me issues with the name
PersonList *updateWeight(PersonList *list, char *first, char *last, int weight)
{
        Person *ptr=search(list, first, last);
        if(ptr == NULL)
        {
                printf("%s %s does not exist, try again", first, last);
                return list;
        }
        list = removePerson(list, first, last);
        list = add(list,first,last, ptr->height, weight);

        return list;
}
