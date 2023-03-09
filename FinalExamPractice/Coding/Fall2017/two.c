#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node {
        char *name;
        struct node *next;
} Node;
void printBefore(Node * myList, char * str)
{
        Node*cur = myList;
        while(1)
        {
                if(cur == NULL || strcmp(cur->name, str)==0)
                        break;
                printf("%s\n",cur->name);
                cur = cur->next;
        }
}
Node *add(Node *ptr, char *name) {
        Node *newOne = malloc( sizeof(Node) );
        newOne->name = malloc( strlen(name) + 1 );
        strcpy(newOne->name, name);
        newOne->next = ptr;
        return newOne;
}
int main(void) {
        char str[100];
        Node *myList = NULL;
        printf("Enter a name to add : ");
        scanf("%s", str);
        while (strcmp(str, "quit") != 0) {
                myList = add(myList, str);
                printf("Enter a name or \"quit\" : ");
                scanf("%s", str);
        }
        printf("\n\n\nEnter a name : ");
        scanf("%s", str);
        printf("The list before %s\n", str);
        printBefore(myList, str);
        return 0;
}
