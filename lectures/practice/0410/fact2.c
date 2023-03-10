#include <stdio.h>
// must have base case if n == 0 return 1
// must have recursive case if n !=0 return n *fact(n-1)
int fact(int n)
{
        printf("Entering, n = %d\n",n );
        int result;
        if (n == 0)
                result = 0;
        else
                result = n * fact(n-1);
        printf("Exiting, fact(%d)=%d\n",n, result );
        return result;
}
int main(void)
{
        printf("Enter a positive integer:\n");
        int n;
        scanf("%d",&n);
        int result = fact(n);
        printf("result is %d\n",result);
        return 0;
}
// using cat in command line will show this code
