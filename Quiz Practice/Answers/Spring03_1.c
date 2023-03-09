//What is the output of the C program shown below?
#include <stdio.h>
int main(void) {
        int sum = 0;
        for (int x=2; x<6; x++) {
                sum = sum + x;
        }
        printf("%d\n", sum);
        int num = 2018, val;
        while ( num > 0 ) {
                val = num % 10;
                printf("%d\n", val);
                num = num / 10;
        }
        return 0;
}
/*
   Expected Output:
   14
   8
   1
   0
   2

   ------------------------

   Actual Output:
   14
   8
   1
   0
   2


 */
