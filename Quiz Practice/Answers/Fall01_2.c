//What is the output of the C program shown below?
#include <stdio.h>
int main( void ) {
        int a = 2, b = 4, c = 6;
        printf("%d and %d and %d\n", a, b, c);
        a = b + c;
        c = b + a;
        b = b - 1;
        printf("%d and %d and %d\n", a, b, c);
        a = c - b;
        b = b / a;
        c = a + b;
        printf("%d and %d and %d\n", a, b, c);
        return 0;
}
/*
   Expected Output:
   2 and 4 and 6
   10 and 3 and 14
   11 and 1 and 12

   ------------------------

   Actual Output:
   2 and 4 and 6
   10 and 3 and 14
   11 and 1 and 11


 */
