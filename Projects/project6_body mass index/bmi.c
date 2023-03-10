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

	// add it to "headHeightList"
	pNew->nextHeight=list->headHeightList;
	list->headHeightList=pNew; 

	// add it to "headWeightList"
	pNew->nextWeight=list->headWeightList;
	list->headWeightList=pNew; 

	return list;
}

int size(PersonList *list) {
	int count=0;
	return count;
}

void printByHeight(PersonList *list) {
}

void printByWeight(PersonList *list) {
}

Person *search(PersonList *list, char *first, char *last) {
	return NULL;
}

void updateName(PersonList *list, char *first, char *last, char *newFirst, char *newLast) { 
}

PersonList *removePerson(PersonList *list, char *first, char *last) {
	return list;
}

PersonList *updateHeight(PersonList *list, char *first, char *last, int height)
{ 
	return list;
}

PersonList *updateWeight(PersonList *list, char *first, char *last, int weight)
{ 
    return list;
}