// Give the output of the C program shown below when run with:
// ./a.out 2 14 3
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
        int x = atoi(argv[1]);
        int y = atoi(argv[2]);
        int z = atoi(argv[3]);
        char str[] = "CrimsonTideAlabama";
        for (int a=x; a<y; a=a+z)
                printf("%c", str[a]);
        printf("\n");
        for (int b=y; b>=z; b=b-x)
                printf("%c", str[b]);
        printf("\n");
        return 0;
}
/*
   Expected Output:
   ioiA
   bleins
   ------------------------

   Actual Output:

   ioiA
   bleins


 */
