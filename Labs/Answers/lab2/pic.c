#include <stdio.h>
int main(void)
{
        printf("Enter a number:\n");
        int num;
        scanf("%d", &num);
        for (int a=0; a<num; a++) {
                for (int b=0; b<num; b++)
                {
                        if(b == a|| b == (num-1)-a)
                                printf("X");
                        else
                                printf(" ");
                }
                printf("\n");
        }

        return 0;
}
