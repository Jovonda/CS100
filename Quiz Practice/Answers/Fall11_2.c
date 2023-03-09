// Give the output of the C program shown below when run with the
// command ./a.out 100 59 777
#include <stdio.h>
#include <stdlib.h>
int f(int a, int b) {
        if (a == 0) return 0;
        int val = a % 10;
        if (val == b)
                return 1 + f(a/10, val);
        return f(a/10, val);
}
int main(int argc, char *argv[]) {
        for (int a=1; a<argc; a++) {
                int num = atoi(argv[a]);
                printf("%d and %d\n", num, f(num, -1) );
        }
        return 0;
}
/*
   Expected Output:
   1
   0
   2

   ------------------------

   Actual Output:
   1
   0
   2
 */
