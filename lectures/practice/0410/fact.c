#include <stdio.h>
// must have base case if n == 0 return 1
// must have recursive case if n !=0 return n *fact(n-1)
int fact(int n)
{
        if (n == 0) return 1;
        return n * fact(n-1);
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
