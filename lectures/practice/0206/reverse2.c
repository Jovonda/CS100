#include <stdio.h>
#include <string.h>
int main(void)
{

        while(1)
        {
                char str[20];
                printf("Enter a word : ");
                scanf("%s", str);
                if(feof(stdin))
                        break;
                int len = strlen(str);
                for (int b=0; b < len/2; b++)
                {
                        //This is very important for swapping
                        char temp = str[b];
                        str[b]= str[len-1-b];
                        str[len-1-b] = temp;
                }
                printf("%s\n", str);

        }
        return 0;
}
