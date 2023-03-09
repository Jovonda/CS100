//What is the output of the C program shown below ?
#include <stdio.h>
int main(void) {
        int x=3, y=5, z=8;
        printf("%d and %d\n", z % y, x / y);
        if ( (x < y) && (y > z) )
                printf("Roll\n");
        else {
                if (y == z)
                        printf("Tide\n");
                else
                        printf("Alabama\n");
        }
        if ( (x+y) != z )
                printf("Crimson Tide\n");
        else {
                if ( z % 2 == 1)
                        printf("UA\n");
                else
                        printf("CS\n");
        }
        return 0;
}
/*
   Expected Output:
   3 and 0
   Alabama
   CS
   ------------------------

   Actual Output:
   3 and 0
   Alabama
   CS

 */
