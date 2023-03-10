#include <stdio.h>
#include <string.h>
int main(void)
{
        char a[100];
        printf("Enter something: ");
        scanf("%s", a);

        for(int i = 0; i < strlen(a); i++)
        {
                printf("%c\n",a[i] );
        }
        return 0;
}
