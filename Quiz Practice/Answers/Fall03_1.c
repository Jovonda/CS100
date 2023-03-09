// What is the output of the C program shown below when the user
// enters the following data as input?
// 30 20 –10 5 –15
#include <stdio.h>
int main(void) {
        int a, b, x=0, y=0;
        for (a=1; a<=5; a=a+1) {
                scanf("%d", &b);
                if (a%2 == 0)
                        x = x + b;
                else
                        y = y + b;
        }
        printf("%d and %d\n", x, y);
        a = 1, b = 1;
        while (a < 4) {
                b = b * 2;
                printf("%d\n", b);
                a = a + 1;
        }
        return 0;
}
/*
   Expected Output:
   25 and 5
   2
   4
   8


   ------------------------

   Actual Output:
   25 and 5
   2
   4
   8


 */
