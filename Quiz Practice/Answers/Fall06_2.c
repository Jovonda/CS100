//What is the output of the C program shown below?
#include <stdio.h>
int main(void) {
        int nums[8] = { 3,1,4,1,5,9,2,6 };
        int z = 0;
        for (int a=0; a<8; a++)
                z = z + nums[a];
        printf("z is %d\n", z);
        int b=0, c=7;
        while (b < c) {
                printf("%d\n", nums[b] + nums[c]);
                b = b + 1;
                c = c - 1;
        }
        return 0;
}
/*
   Expected Output:
   z is 31
   9
   3
   13
   6
   ------------------------

   Actual Output:

   z is 37
   10
   8
   9
   10


 */
