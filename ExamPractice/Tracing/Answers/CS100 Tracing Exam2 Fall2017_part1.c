//What is the output of the C program shown below?
#include <stdio.h>
#include <string.h>
void f(int *a, int *b) {
        *a = *a + *b;
        *b = *b - *a;
        return;
}
int main(void) {
        char str[]= "ABCDEFGHIJKLMNOPQRST";
        int a = strlen(str), b = 1;
        while (b < a) {
                printf("%c", str[b]);
                b = b * 2;
        }
        printf("\n");
        int x = 10, y = 5;
        f(&x, &y);
        printf("%d and %d\n", x, y);
        f(&x, &y);
        printf("%d and %d\n", x, y);
        return 0;
}
/*
   Expected:
   BCEIQ
   15 and -10
   5 and -15
   ----------------------------

   Actual:
   BCEIQ
   15 and -10
   5 and -15

 */
