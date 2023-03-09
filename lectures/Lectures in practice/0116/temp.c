#include <stdio.h>
#include <math.h>
//in vim use yyp to copy
// use for functions gcc -Wall filename.c -lm

int main(void)
{
        int f;
        double c;
        printf("Enter temperature in Fahrenheit:\n");
        scanf("%d",&f);

        c = 5.0/9*(f-32);
        printf("%d degrees in Fahrenheit is %d degrees in Celsius\n", f, (int)round(c));
        return 0;
}
