//What is the output of the C program shown below ?
#include <stdio.h>
int main(void) {
        int a=2, b=3, c=20;
        if ( a*b > c/b )
                printf("A\n");
        else
                printf("Z\n");
        if ( a < b && b < c ) printf("1\n");
        if ( a > b || b < c ) printf("2\n");
        if ( a * 2 == b * 3 ) printf("3\n");
        if ( a * b > c ) printf("4\n");
        if ( ( (c/b) / a) > 0 ) printf("5\n");
        return 0;
}
/*
   Expected Output:
   Z
   1
   2
   5
   ------------------------

   Actual Output:

   Z
   1
   2
   5


 */
