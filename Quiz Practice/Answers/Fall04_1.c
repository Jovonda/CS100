//What is the output of the C program shown below ?
#include <stdio.h>
int main(void) {
        for (int a=1; a<=4; a++) {
                for (int b=1; b<=4; b++) {
                        if (a < b)
                                printf("X");
                        else
                        if (a > b)
                                printf("O");
                        else
                                printf(".");
                }
                printf("\n");
        }
        return 0;
}
/*
   Expected Output:
   .XXX
   O.XX
   OO.X
   OOO.

   ------------------------
   Actual Output:
   .XXX
   O.XX
   OO.X
   OOO.
 */
