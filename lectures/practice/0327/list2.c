#include <stdio.h>
#include <stdlib.h>

typedef struct _letter
{
        char ch;
        struct _letter *next;
}Letter;
//This returns a pointer to the node of type letter
Letter *createNode (char ch, Letter *next)
{
        //This is for many variables
        Letter *ptr = malloc(sizeof(Letter));

        //with -> or . is attribute, with out is parapmeter
        ptr->ch = ch;
        ptr->next = next;
        return ptr;

}
void printList(Letter *head)
{
        Letter *cur = head;
        while(cur != NULL)
        {
                printf("%c",cur->ch);
                cur = cur->next;
        }
        printf("\n");
}
int main(int argc, char const *argv[]) {
        // Letter *pOne, *pTwo, *pThree, *pFour;
        // start off with empty list
        printf("size =%d\n", (int)sizeof(Letter));
        Letter *head=NULL;
        // E has NULL
        head = createNode('E', head);
        // D points to E
        head = createNode('D', head);
        // I points D
        head = createNode('I', head);
        // T points to I
        head = createNode('T', head);

        printList(head);


        return 0;
}
