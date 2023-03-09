#include <stdio.h>
#include <stdlib.h>
typedef struct node {
        int data;
        struct node *next;
} Node;
Node *function1(Node *ptr, int num) {
        Node *new1 = malloc( sizeof(Node) );
        new1->data = num;
        Node *new2 = malloc( sizeof(Node) );
        new2->data = num;
        if (ptr == NULL || num%2 == 0) {
                new1->next = new2;
                new2->next = ptr;
                return new1;
        }
        Node *temp = ptr;
        while (temp->next != NULL)
                temp = temp->next;
        temp->next = new1;
        new1->next = new2;
        new2->next = NULL;
        return ptr;
}
void function2(Node *ptr) {
        printf("[ ");
        for (Node *temp = ptr; temp != NULL; temp = temp->next)
                printf("%d ", temp->data);
        printf("]\n");
        return;
}
int main(void) {
        Node *ptr = NULL;
        int value;
        scanf("%d", &value);
        while ( value != 0 ) {
                ptr = function1(ptr, value);
                function2(ptr);
                scanf("%d", &value);
        }
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
