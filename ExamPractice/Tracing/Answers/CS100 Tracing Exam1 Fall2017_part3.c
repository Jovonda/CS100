// What is the output of the C program shown below
// when the user enters the input shown at the right?
// 18 4
// 3 14
// 30 9
// 5 19
#include <stdio.h>
int main(void) {
        int a, x, y, z=0;
        for (a=0; a<4; a++) {
                scanf("%d %d", &x, &y);
                if (x < y) {
                        z = z - x;
                        printf("%d\n", y%x);
                }
                else
                        z = z + x;
        }
        printf("%d\n", z);
        return 0;
}
/*
   Expected:
   2
   4
   40


   ----------------------------

   Actual:
   2
   4
   40

 */
