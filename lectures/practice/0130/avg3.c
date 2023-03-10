#include <stdio.h>
int main(void)
{
        int i = 0, sum = 0;
        printf("Enter integer #%d or ctrl-d to end: ",i+1);
        int n;
        scanf("%d", &n);
        while (!feof(stdin))//how to check for ctrl-d
        {
                //Process
                //sum = sum + n (same as below);
                i++;
                sum+=n;
                //read
                printf("Enter integer #%d or ctrl-d to end: ",i+1);
                scanf("%d", &n);

        }
        double avg = (double)sum/i;
        printf("The average is %lf\n",avg );
        return 0;
}
