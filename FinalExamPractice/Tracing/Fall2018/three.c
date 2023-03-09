#include <stdio.h>
#include <stdlib.h>
typedef struct _node {
        int data;
        struct _node *next;
} Node;
Node *a(int num, Node *ptr) {
        Node *pTemp = malloc( sizeof(Node) );
        pTemp->data = num;
        pTemp->next = ptr;
        return pTemp;
}
Node *b(Node *ptr1, Node *ptr2) {
        if (ptr1==NULL) return ptr2;
        ptr1->next=b(ptr1->next, ptr2);
        return ptr1;
}
void c(Node *ptr) {
        printf("[ ");
        for (Node *cur = ptr; cur != NULL; cur = cur->next)
                printf("%d ", cur->data);
        printf("]\n");
}
int main(void) {
        Node *ptr1 = NULL;
        Node *ptr2 = NULL;
        while (1) {
                int value;
                scanf("%d", &value);
                if (value==0) break;
                Node *ptr=a(value, NULL);
                if (value%2!=0)
                        ptr1=b(ptr1, ptr);
                else
                        ptr2=b(ptr2, ptr);
        }
        c(ptr1);
        c(ptr2);
        b(ptr1, ptr2);
        c(ptr1);
        c(ptr2);
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
