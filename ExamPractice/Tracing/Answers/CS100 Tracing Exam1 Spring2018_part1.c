// Give the output of the C program shown below when
// the user enters the input value 14523
#include <stdio.h>
int main(void) {
        int a, num, temp, ans;
        scanf("%d", &num);
        while (num != 0) {
                ans = 0;
                temp = num % 10;
                for (a=1; a<=temp; a++)
                        ans = ans + temp;
                printf("%d\n", ans);
                num = num / 10;
        }
        return 0;
}
/*
   Expected:
   9
   4
   25
   16
   1


   ----------------------------

   Actual:
   9
   4
   25
   16
   1

 */
