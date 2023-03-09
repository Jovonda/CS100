// Give the output of the C program shown below
// when run with the command ./a.out 1 3 0 2
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
        char ch;
        struct node *next;
} Node;
int main(int argc, char *argv[]) {
        Node a, b, c, d;
        a.ch = 'T'; a.next = &b;
        b.ch = 'I'; b.next = &c;
        c.ch = 'D'; c.next = &d;
        d.ch = 'E'; d.next = &a;
        Node *ptr = &a;
        for (int a=1; a<argc; a++) {
                int val = atoi(argv[a]);
                for (int b=0; b<val; b++)
                        ptr = ptr->next;
                printf("%c\n", ptr->ch);
        }
        return 0;
}
/*
   Expected Output:
   I
   T
   T
   D
   ------------------------

   Actual Output:
   I
   T
   T
   D


 */
