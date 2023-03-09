//What is the output of the C program shown below?
#include <stdio.h>
int main(void) {
        int a=2, b=4, c=9, d=20, e=1;
        if ( a>b || c>d) printf("A\n");
        if ( a<b && e>0) printf("B\n");
        if ( (a*b+e) <= c ) printf("C\n");
        if ( d%c != e ) printf("D\n");
        if ( c/b == a+e ) printf("E\n");
        if ( a*b+c+e > d ) printf("F\n");
        return 0;
}
/*
   Expected Output:

   B
   C
   D
   ------------------------

   Actual Output:
   B
   C
   D
 */
