#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void isaNumber(char *word)
{
        FILE *fp2, *fp3;
        fp2 = fopen("integers", "w");
        fp3 = fopen("others", "w");
        if(word[0]== '+' || word[0]== '-'|| isdigit(word[0]))
        {
                for(int i = 1; i < strlen(word); i++)
                {
                        if(!isdigit(word[i]))
                                count++;
                }
                if(count == 1)
                {
                        printf("Not a number\n");
                        fprintf(fp3, "%s", word);
                }
                else if(!isdigit(word[strlen(word)-1]))
                {
                        printf("Not a number\n");
                        fprintf(fp3, "%s", word);
                }
                else
                {
                        printf("Is a number\n");
                        fprintf(fp2, "%s", word);
                }

        }
        else
        {
                printf("Not a number\n");
                fprintf(fp3, "%s", word);
        }
}
int main(int argc, char const *argv[]) {
        FILE *fp1;
        fp1 = fopen(argv[1], "r");
        char word[100];
        int count = 0;
        printf("Please enter a number\n");
        scanf("%s", word);
        while(1)
        {
                scanf("%s", word);
                if(feof(fp))
                        break;
                isaNumber(word);

        }
        // if(word[0]== '+' || word[0]== '-'|| isdigit(word[0]))
        // {
        //         for(int i = 1; i < strlen(word); i++)
        //         {
        //                 if(!isdigit(word[i]))
        //                         count++;
        //         }
        //         if(count == 1)
        //                 printf("Not a number\n");
        //         else if(!isdigit(word[strlen(word)-1]))
        //                 printf("Not a number\n");
        //         else
        //                 printf("Is a number\n");
        //
        // }
        // else
        //         printf("Not a number\n");

        return 0;
}
