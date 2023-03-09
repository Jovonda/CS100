#include <stdio.h>
// must have base case if n == 0 return 1
// must have recursive case if n !=0 return n *fact(n-1)
int sumDigits(int n)
{

        if (n == 0) return 0;
        return n%10 + sumDigits(n/10);
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
