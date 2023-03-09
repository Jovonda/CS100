#include <stdio.h>

int main(void)
{
        const int SIZE = 5;
        int x[SIZE];
        //int a, b, c, d;
        int max;

        for(int i = 0; i < SIZE; i++)
        {
                printf("Enter integer #%d:", i+1);
                scanf("%d", &x[i]);
        }
        /*  printf("Enter integer #1: ");
           scanf("%d", &a);
           printf("Enter integer #2: ");
           scanf("%d", &b);
           printf("Enter integer #3: ");
           scanf("%d", &c);
           printf("Enter integer #4: ");
           scanf("%d", &d);
         */
        max= x[0];
        //max =a;
        for (int i = 1; i < SIZE; i++)
        {
                if(x[i]>max)
                        max = x[i];
        }
        // if (b>max) max = b;
        // if (c>max) max = c;
        // if (d>max) max = d;

        printf("Max is %d\n", max);

        return 0;
}
