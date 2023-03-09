#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _argument {
        char *argument;
        struct _argument *next;
} Argument;

// Build a linked list to represent the command line arguments.
// Return the head of the linked list built.
// Please do not include the command name.
Argument *buildList(int argc, char *argv[])
{
        Argument *head = NULL;
        for(int i = argc-1; i > 0; i--)
        {
                Argument *ptr = malloc(sizeof(Argument));
                ptr->argument = argv[i];
                ptr->next = head;
                head = ptr;
        }
        return head;
}

// Print the linked list. For example, if the user enters
// ./a.out Monday Tuesday Wednesday Thursday Friday
// it prints Monday-->Tuesday-->Wednesday-->Thursday-->Friday
void printList(Argument *head)
{
        Argument *cur = head;
        while(cur != NULL)
        {
                //this is first node
                if(cur == head)
                        printf("%s",cur->argument);
                // no first node
                else
                        printf("-->%s",cur->argument);
                cur = cur->next;
        }
        printf("\n");
}

int main(int argc, char *argv[])
{
        Argument *head=buildList(argc, argv);

        printList(head);

        return 0;
}
