#include <stdio.h>
int main(void)
{
        printf("Enter a number:\n");
        int num;
        scanf("%d", &num);
        for (int a=0; a<num; a++) {
                for (int b=0; b<num; b++)
                {
                        if( a <= b)
                                printf("X");
                        else
                                printf(" ");
                }
                printf("\n");
        }

        return 0;
}
