#include <stdio.h>
int main(void)
{
        int i, min, max, size = 4;
        for (i = 0; i < size; i= i+1)
        {
                int n;
                printf("Enter integer %d\n",i+1);
                scanf("%d", &n);
                if(i == 0)
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
        printf("The min is %d\n",min );
        printf("The max is %d\n",max );
        return 0;
}
