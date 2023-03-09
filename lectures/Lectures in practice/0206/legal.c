#include <stdio.h>
#include <string.h>
int main(void)
{
        int a, b, flag;
        char str[20];
        for (a=0; a<10; a++)
        {
                printf("Enter a word : ");
                scanf("%s", str);
                int len = strlen(str);
                flag = 0;
                for (b=0; b<len; b++)
                {

                        if (str[b] == 'a') flag = 1;
                        else if (str[b] == 'e')
                        {
                                flag = 1;
                                break;
                        }
                        else if (str[b] == 'i')
                        {
                                flag = 1;
                                break;
                        }
                        else if (str[b] == 'o')
                        {
                                flag = 1;
                                break;
                        }
                        else if (str[b] == 'u')
                        {
                                flag = 1;
                                break;
                        }
                }
                if (flag == 0)
                        printf("No vowels in %s\n", str);
        }

        return 0;
}
