//Give the output of the C program shown below:
#include <stdio.h>
int max(int a, int b) {
        if ( a > b ) return a;
        return b;
}
int f(int num) {
        if (num == 0) return 0;
        int digit = num % 10;
        return max(digit, f(num/10) );
}
int main( ) {
        printf("25 is %d\n", f(25) );
        printf("10 is %d\n", f(10) );
        printf("8642 is %d\n", f(8642) );
        printf("1591 is %d\n", f(1591) );
        return 0;
}
/*
   Expected Output:
   25 is 5
   10 is 1
   8642 is 8
   1591 is 9
   ------------------------

   Actual Output:
   25 is 5
   10 is 1
   8642 is 8
   1591 is 9
 */
