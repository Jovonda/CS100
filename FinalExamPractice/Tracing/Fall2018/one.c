#include <stdio.h>
int g(int n) {
        for (int i=0; i<10; i++) {
                if (i*i == n) return i;
        }
        return 0;
}
int f(int n) {
        if (n == 0) return 0;
        return g(n%10) + f(n/10);
}
int main(void) {
        printf("%d\n", f(4) );
        printf("%d\n", f(25) );
        printf("%d\n", f(165) );
        printf("%d\n", f(1024) );
        printf("%d\n", f(79146) );
        return 0;
}

/*
   Expected:
   2
   0
   1
   3
   6

   Actual:
   2
   0
   1
   3
   6
 */
