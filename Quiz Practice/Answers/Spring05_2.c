// What is the output of the C program shown below?
#include <stdio.h>
int main(void) {
        int a, b, nums[4] = { 4, 3, 2, 1 };
        for (a=0; a<4; a++) {
                int x = a + 1;
                for (b=1; b<=x; b++) {
                        nums[a] = nums[a] + b;
                }
        }
        for (a=3; a>=0; a--) {
                printf("%d\n", nums[a]);
        }
        return 0;
}
/*
   Expected Output:
   11
   8
   6
   5
   ------------------------

   Actual Output:
   11
   8
   6
   5
 */
