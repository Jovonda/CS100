// Give the output of the C program shown below
// when run with the command ./a.out ABC
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
        char val;
        struct node *next;
} Node;
Node *function(Node *head, char ch) {
        Node *temp1 = malloc( sizeof(Node) );
        temp1->val = ch; temp1->next = head;
        Node *ptr = temp1;
        printf("%c\n",temp1->val);
        if(temp1->next != NULL)
                printf("%c\n",temp1->next->val);
        while (ptr->next) ptr = ptr->next;
        Node *temp2 = malloc( sizeof(Node) );
        temp2->val = ch; temp2->next = NULL;
        ptr->next = temp2;
        printf("%c\n",temp2->val);
        if(temp2->next != NULL)
                printf("%c\n",temp2->next->val);
        /*
           First time around:
           temp1 = A, temp1 = NULL
           temp2 = A, temp2 = NULL
           AA
           Then
           temp1 = B, temp1 = points to address A
           temp2 = B, temp2 = NULL
           BAAB
           Then
           temp1 = C, temp1 = points to addrss B
           temp2 = C, temp2 = NULL
           CBAABC



         */
        return temp1;
}
int main(int argc, char *argv[]) {
        Node *ptr = NULL;
        for (int a=0; a<strlen(argv[1]); a++)
                ptr = function(ptr, argv[1][a]);
        while (ptr) {
                printf("%c", ptr->val);
                ptr = ptr->next;
        }
        printf("\n");
        return 0;
}

/*
   Expected Output:
   CCC
   BB
   A
   ------------------------

   Actual Output:
   CBAABC
 */
