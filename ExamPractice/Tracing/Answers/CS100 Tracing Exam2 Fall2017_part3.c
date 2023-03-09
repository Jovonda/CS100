//What is the output of the C program shown below?
#include <stdio.h>
#include <string.h>
void f(int *a, int *b) {
        *a = *a + *b;
        *b = *b - *a;
        return;
}
int main(void) {
        char str[]= "University of Alabama";
        int a = strlen(str), b = 1;
        while (b < a) {
                printf("%c", str[b]);
                b = b * 2;
        }
        printf("\n");
        int x = 4, y = 3;
        f(&x, &y);
        printf("%d and %d\n", x, y);
        f(&x, &y);
        printf("%d and %d\n", x, y);
        return 0;
}
/*
   Expected:
   nieta
   7 and -4
   3 and -7
   ----------------------------

   Actual:
   nieta
   7 and -4
   3 and -7

 */
