#include <stdio.h>
int main(void)
{
        int i = 0, sum = 0, n;
        while (1)
        {
                //read
                printf("Enter integer #%d or -1 to end: ",i+1);
                scanf("%d", &n);
                //check
                if(n==-1) break;
                //Process
                //sum = sum + n (same as below);
                i++;
                sum+=n;
        }
        double avg = (double)sum/i;
        printf("The average is %lf\n",avg );
        return 0;
}
