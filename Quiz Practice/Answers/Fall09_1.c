//Give the output of the C program shown below:
#include <stdio.h>
typedef struct item {
        int value;
        struct item *next;
} Item;
int main(void) {
        Item a, b;
        a.value = 0; a.next = &b;
        b.value = 0; b.next = &a;
        Item *ptr = &a;
        for (int z=1; z<5; z++) {
                ptr->value = ptr->value + z;
                ptr = ptr->next;
        }
        printf("%d and %d\n", a.value, b.value);
        return 0;
}
/*
   Expected Output:
   4 and 6
   ------------------------

   Actual Output:

   4 and 6


 */
