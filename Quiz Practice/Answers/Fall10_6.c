// Give the output of the C program shown below
// when run with the command ./a.out 31415
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
        int val;
        struct node *next;
} Node;
int main(int argc, char *argv[]) {
        Node *ptr = NULL;
        int number = atoi(argv[1]);
        while (number > 0) {
                int num = number % 10;
                Node *temp = malloc( sizeof(Node) );
                temp->val = num;
                temp->next = ptr;
                ptr = temp;
                number = number / 10;
        }
        while (ptr) {
                printf("%d\n", ptr->val);
                ptr = ptr->next;
        }
        return 0;
}
/*
   Expected Output:
   3
   1
   4
   1
   5

   ------------------------

   Actual Output:

   3
   1
   4
   1
   5


 */
