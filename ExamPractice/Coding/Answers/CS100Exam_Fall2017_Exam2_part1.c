#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

        char word[50];
        printf("Enter your text: ");
        while (1)
        {       scanf("%s",word );
                if(feof(stdin))
                        break;
                for(int i = 0; i < strlen(word); i++)
                {
                        if(i == 0 || i == strlen(word)-1)
                                printf("%c", word[i]);
                        // if(i == strlen(word)-1)
                        //         printf("\n");
                }
                printf("\n");
                //because I do not want the bracket to wrap around printf
        }
        return 0;
}
