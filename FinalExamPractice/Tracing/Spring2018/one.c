#include <stdio.h>
int f(int num) {
        if (num == 0) return 0;
        return 2 * num - 1 + f(num-1);
}
int main(void) {
        printf("%d\n", f(2) );
        printf("%d\n", f(4) );
        printf("%d\n", f(5) );
        printf("%d\n", f(9) );
        printf("%d\n", f(0) );
        return 0;
}
/*
   Expected:
   4
   16
   25
   81
   0

   Actual:
   4
   16
   25
   81
   0
 */
