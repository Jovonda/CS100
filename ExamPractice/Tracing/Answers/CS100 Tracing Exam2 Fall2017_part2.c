// What is the output of the C program below using the
// file data1 that is shown at the right?
// 1 4 5 9 10
#include <stdio.h>
int f1(int a) {
        return a * a;
}
int f2(int a) {
        return a + a;
}
int funct(int z) {
        if (z % 2 == 0)
                return z * f1(z);
        else
                return z + f2(z);
}
int main(void) {
        FILE *fp1 = fopen( "data1", "r" );
        int a;
        for (int x=0; x<5; x++) {
                fscanf(fp1, "%d", &a);
                printf( "%d\n", funct(a) );
        }
        fclose(fp1);
        return 0;
}
/*
   Expected:
   3
   64
   15
   27
   1000

   ----------------------------

   Actual:
   3
   64
   15
   27
   1000

 */
