#include <string.h>
#include <stdio.h>
#include <ctype.h>
// Fixed
int isaNumber(char word[])
{

        int count = 0;
        if(word[0]== '+' || word[0]== '-'|| isdigit(word[0]))
        {
                for(int i = 1; i < strlen(word); i++)
                {
                        if(!isdigit(word[i]))
                                count++;
                }
                if(count == 1)
                {
                        return 0;
                }
                else if(!isdigit(word[strlen(word)-1]))
                {
                        return 0;
                }
                else
                {
                        return 1;
                }

        }
        else
        {
                return 0;
        }

}
int main(int argc, char const *argv[]) {
        FILE *fp1;
        fp1 = fopen(argv[1], "r");
        FILE *fp2, *fp3;
        fp2 = fopen("integers", "w");
        fp3 = fopen("others", "w");
        char word[100];
        while(1)
        {
                fscanf(fp1, "%s", word);
                if(feof(fp1))
                        break;
                isaNumber(word);
                if(isaNumber(word) == 0)
                {
                        //printf("Not a number\n");
                        fprintf(fp3, "%s ", word);
                }
                else
                {
                        //printf("Is a number\n");
                        fprintf(fp2, "%s ", word);
                }

        }
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        return 0;
}
