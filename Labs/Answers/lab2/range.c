#include <stdio.h>
int main(void)
{
        int min, max;
        printf("Enter integer\n");
        while(!feof(stdin))
        {
                int n;
                scanf("%d", &n);
                if(n == 0)
                {
                        min = n;
                        max = n;
                }
                else
                {
                        if(n < min)
                                min = n;
                        if(n > max)
                                max = n;
                }
        }

        printf("Range of input = %d", max - min);
        return 0;
}
