#include <stdio.h>
int main(void)
{
        printf("Enter a number:\n");
        int num;
        scanf("%d", &num);
        for (int a=0; a<num; a++) {
                for (int b=0; b<num; b++)
                {
                        if( a+b == num-1 || a== num-1 || b== num-1)
                                printf("X");
                        else
                                printf(" ");
                }
                printf("\n");
        }

        return 0;
}
