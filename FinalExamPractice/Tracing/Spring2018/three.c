#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node {
        char *name;
        struct node *next;
} Node;
void function(Node *ptr, int num) {
        int a, x = num % 10, y = num / 10;
        printf("Word got is: %s\n", ptr->name);
        for (a=0; a<x; a++)
                ptr = ptr->next;
        printf("Word that is picked from: %s\n", ptr->name);
        printf("%c\n", ptr->name[y]);
        return;
}
Node *add(Node *ptr, char *name) {
        Node *newNode = malloc( sizeof(Node) );
        newNode->name = malloc( strlen(name) + 1 );
        strcpy(newNode->name, name);
        newNode->next = ptr;
        return newNode;
}
int main(void) {
        Node *myList = NULL;
        myList = add(myList, "UNIVERSITY");
        myList = add(myList, "OF");
        myList = add(myList, "ALABAMA");
        myList = add(myList, "CRIMSON");
        myList = add(myList, "TIDE");
        function(myList, 12);
        function(myList, 3);
        function(myList, 30);
        function(myList, 64);
        function(myList, 0);
        return 0;
}
/*
   Expected:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]

   Actual:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]
 */
