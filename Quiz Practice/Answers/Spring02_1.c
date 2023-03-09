//What is the output of the C program shown below?
#include <stdio.h>
int main(void) {
        int a=5, b=48;
        if ( (a%2) == 0 )
                printf("Roll\n");
        else
                printf("Tide\n");
        int c = b/a + b%a;
        printf("%d\n", c);
        int x=4, y=6, z=2;
        if ( (x>y) && (z>y) )
                printf("University\n");
        else {
                if ( (x+z) == y )
                        printf("Alabama\n");
                else
                        printf("UofA\n");
        }
        return 0;
}
/*
   Expected Output:

   Crimson
   Tide
   12
   Alabama
   ------------------------

   Actual Output:
   Tide
   12
   Alabama
 */
