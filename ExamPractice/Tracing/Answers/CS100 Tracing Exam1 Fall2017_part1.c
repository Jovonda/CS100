// What is the output of the C program shown below
// when the user enters the input shown at the right?
// 2 9 --0
// 5 18 --1
// 13 4 --2
// 27 5 --3
#include <stdio.h>
int main(void) {
        int a, x, y, z=0;
        for (a=0; a<4; a++) {
                scanf("%d %d", &x, &y);
                if (x < y) {
                        z = z - x;//-2,-7
                        printf("%d\n", y%x);//1, 3
                }
                else
                        z = z + x; //6,33
        }
        printf("%d\n", z); //2
        return 0;
}
/*
   Expected:
   1
   3
   2


   ----------------------------

   Actual:
   1
   3
   33

 */
