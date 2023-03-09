#include <stdio.h>
// must have base case if n == 0 return 1
// must have recursive case if n !=0 return n *fact(n-1)
int sumDigits(int n)
{
        printf("Entering, n=%d\n", n );
        int result;
        if (n == 0) result = 0;
        else
                result = n%10 + sumDigits(n/10);
        printf("Exiting, sumDigits(%d)=%d\n",n, result);
        return result;
}
int main(void)
{
        printf("Enter a positive integer:\n");
        int n;
        scanf("%d",&n);
        int result = sumDigits(n);
        printf("result is %d\n",result);
        return 0;
}
// using cat in command line will show this code
