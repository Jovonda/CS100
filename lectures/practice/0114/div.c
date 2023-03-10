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
								int c;
								result = a / b;
								printf("The result is %d\n", result);
								return 0;
}
// using cat in command line will show this code
// Use -Wall for all warnings
// use -o to to change the name of exe like a.exe to mod.exe
