//Give the output of the C program shown below:
#include <stdio.h>
#include <stdlib.h>
int f(int a[], int b, int c) {
        if (b == c) return a[b];
        return a[b] + f(a, b+1, c);
}
int main(void) {
        int vals[10] = {3,1,4,1,5,9,2,6,5,3};
        printf("%d\n", f(vals, 0, 3) );
        printf("%d\n", f(vals, 4, 8) );
        printf("%d\n", f(vals, 9, 9) );
        return 0;
}
/*
   Expected Output:
   9
   27
   3
   ------------------------

   Actual Output:

   3
   1
   4
   1
   5


 */
