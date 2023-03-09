#include <stdio.h>
#include <string.h>
int main(void)
{
        char str[20];
        while(1)
        {

                printf("Enter a word : ");
                scanf("%s", str);
                if(feof(stdin))
                        break;
                int len = strlen(str);
                for (int b=len-1; b>=0; b--)
                {
                        printf("%c",str[b]);
                }
                printf("\n");

        }
        return 0;
}
