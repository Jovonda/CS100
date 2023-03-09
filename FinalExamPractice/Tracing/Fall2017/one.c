//1. What is the output from the program shown below ?
#include <stdio.h>
int function(int data[], int z) {
        if (z == 1) {
                if (data[0] > 0) return 1;
                else return 0;
        }
        if (data[z-1] > 0)
                return 1 + function(data, z-1);
        else
                return function(data, z-1);
}
int main(void) {
        int a[3] = { -1, 0, 1 };
        int b[4] = { 10, 5, 0, -5 };
        int c[5] = { 1, 2, 3, 4, 5 };
        int d[4] = { 11, -22, 33, -44 };
        int e[1] = { -1 };
        printf("%d\n", function(a, 3) );
        printf("%d\n", function(b, 4) );
        printf("%d\n", function(c, 5) );
        printf("%d\n", function(d, 4) );
        printf("%d\n", function(e, 1) );
        return 0;
}
/*
   Expected:
   1
   2
   5
   2
   0

   Actual:
   1
   2
   5
   2
   0
 */
