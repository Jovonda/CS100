#include <stdio.h>
#include <stdlib.h>
typedef struct node {
        int val;
        struct node *next;
}Node;
int main(int argc, char *argv[]) {
        Node a, b;
        a.val = atoi(argv[1]);
        a.next = &b;
        b.val = atoi(argv[2]);
        b.next = &a;
        Node *ptr = &b;
        while (ptr->val > 0)
        {
                printf("%d ",ptr->val%2);
                ptr->val = ptr->val/2;
                ptr = ptr->next;
        }
        printf("\n");
        printf("A: %d\n", a.val);
        printf("B: %d\n",b.val );
        return 0;
}
