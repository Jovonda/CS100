#include <stdio.h>
int main(void)
{
        int i, sum = 0, size = 4;
        printf("Please enter a number\n");
        for (i = 0; i < size; i= i+1)
        {
                int n;
                printf("Enter integer %d\n",i+1);
                scanf("%d", &n);
                //sum = sum + n (same as below);
                sum+=n;
        }
        double avg = (double)sum/size;
        printf("The average is %lf\n",avg );
        return 0;
}
// Use for loops gcc -Wall -std=c99 file.c
