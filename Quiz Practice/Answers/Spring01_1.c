//What is the output of the C program shown below
//when the user enters the values 5 and 2 as the program runs?
#include <stdio.h>
int main ( void ) {
        printf("Crimson\nT\nI\nD\nE\n");
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        printf("%d and %d\n", x * y + y, x / y );
        return 0;
}
/*
   Expected Output:

   Crimson
   T
   I
   D
   E
   12 and 2
   ------------------------

   Actual Output:
   Crimson
   T
   I
   D
   E
   12 and 2
 */
