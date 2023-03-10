#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _letter
{
        char *name;
        struct _letter *next;
}Letter;
//This returns a pointer to the node of type letter
Letter *createNode (char name[], Letter *next)
{
        //When declaring space you get multiples of 8
        //This is for many variables
        Letter *ptr = malloc(sizeof(Letter));
        ptr->name = malloc(strlen(name)+1);
        //with -> or . is attribute, with out is parapmeter
        strcpy(ptr->name,name);
        ptr->next = next;
        return ptr;

}
void printList(Letter *head)
{
        Letter *cur = head;
        while(cur != NULL)
        {
                //this is first node
                if(cur == head)
                        printf("%s",cur->name);
                // no first node
                else
                        printf("-->%s",cur->name);
                cur = cur->next;
        }
        printf("\n");
}
int main(int argc, char const *argv[]) {
        // Letter *pOne, *pTwo, *pThree, *pFour;
        // start off with empty list
        printf("size =%d\n", (int)sizeof(Letter));
        Letter *head=NULL;
        head = createNode("Trump", head);
        head = createNode("Obama", head);
        head = createNode("Bush", head);
        head = createNode("Clinton", head);

        printList(head);


        return 0;
}
