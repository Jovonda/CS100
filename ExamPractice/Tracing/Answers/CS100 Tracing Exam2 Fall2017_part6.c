//What is the output of the C program shown below?
#include <stdio.h>
int f1(int a, int b) {
        return a-b;
}
int f2(int a, int b) {
        return a%b;
}
int g(int a, int b) {
        if (a%2==0) return f1(a, b);
        else return f2(a, b);
}
int h(int a, int b) {
        while (a!=b)
                if (a>b)
                        a=g(a, b);
                else
                        b=g(b, a);
        return a;
}
void fuzz(int *a, int *b, int *c) {
        int t = *a + *b + *c;
        *a = t - *a;
        *b = t - *b;
        *c = t - *c;
}
int main(void) {
        printf("A=%d\n", h(24, 16));
        printf("B=%d\n", h(9, 15));
        int x=3, y=4, z=5;
        fuzz(&x, &y, &z);
        printf("x=%d, y=%d, z=%d\n", x, y, z);
        fuzz(&z, &y, &x);
        printf("x=%d, y=%d, z=%d\n", x, y, z);
        return 0;
}
/*
   Expected:
   A=8
   B=3
   x=9, y=8, z=7
   x=15, y=16, z=17
   ----------------------------

   Actual:
   A=8
   B=3
   x=9, y=8, z=7
   x=15, y=16, z=17

 */
