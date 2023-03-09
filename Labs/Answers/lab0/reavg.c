#include <stdio.h>
int main()
{
        int a, b, c, d;
        double avg;
        printf("Enter integer #1:\n");
        scanf("%d", &a );
        printf("Enter integer #2:\n");
        scanf("%d", &b );
        printf("Enter integer #3:\n");
        scanf("%d", &c );
        printf("Enter integer #4:\n");
        scanf("%d", &d );
        avg = (a+b+c+d)/4.0;
        printf("The average is %lf\n", avg );
        return 0;
}
