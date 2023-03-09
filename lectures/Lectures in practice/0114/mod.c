#include <stdio.h>
int main(void)
{
								int a;
								printf("Enter an integer: ");
								scanf("%d", &a);
								int b;
								printf("Enter another integer: ");
								scanf("%d", &b);
								int result;
								result = a % b;
								printf("The result is %d\n", result);
								return 0;
}
// using cat in command line will show this code
