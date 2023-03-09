#include <stdio.h>
int main(void)
{

        int x = 3, y = 4, z = 5;
        // To print address use %p
        // To print number use %d
        // int* a  is pointer (a varible that can store an address) 64 bits
        // int a is varible (can't store address) 32 bits
        printf("%d and %p\n", x, &x);
        printf("%d and %p\n", y, &y);
        printf("%d and %p\n", z, &z);
        int *a, *b, *c;
        a = &x;
        b = &y;
        c = &z;
        // x and *a are the same, the *a is back to number NOT address
        // &x and a are the same, give back addres NOT number
        printf("x=%d, &x=%p, a=%p, *a=%d\n", x, &x, a, *a);
        printf("y=%d, &y=%p, b=%p, *b=%d\n", y, &y, b, *b);
        printf("z=%d, &z=%p, c=%p, *c=%d\n", z, &z, c, *c);

        return 0;
}
// using cat in command line will show this code
