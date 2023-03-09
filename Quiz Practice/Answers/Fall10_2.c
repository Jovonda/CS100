// Give the output of the C program shown below when run with the
// command ./a.out 4444 333 1 22
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
        char *val;
        struct node *next;
} Node;
int main(int argc, char *argv[]) {
        Node *ptr = NULL;
        for (int i=1; i<argc; i++) {
                Node *temp = malloc( sizeof(Node) );
                temp->val = argv[i];
                temp->next = ptr;
                ptr = temp;
                /*
                   For the first temp->val = 4444
                   temp->next = NULL

                   For the second temp->val = 333
                   temp-> next = address of 4444

                   For the third temp-> = 1
                   temp->next = address of 333

                   For the fourth temp-> 22
                   temp->next address of 1

                   Inside ptr
                   [
                   first ptr is val = 4444, next = NULL
                   second ptr is val = 333, next = address of 4444
                   third ptr is val = 1, next = address 333
                   fourth ptr is val = 22, next = address 1
                   ]
                 */
        }
        int i=1;
        while (ptr!=NULL) {
                //This starts with the value that was given first and goes
                // backwards 22, 1, 333, 4444,
                printf("%d: %s\n", i, ptr->val);
                i++;
                ptr = ptr->next;
        }
        return 0;
}
/*
   Expected Output:
   1: 22
   2: 1
   3: 33
   4: 4444
   ------------------------

   Actual Output:
   1: 22
   2: 1
   3: 33
   4: 4444


 */
