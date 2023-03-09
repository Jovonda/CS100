#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
        FILE *fp1, *fp2;

        fp1 = fopen(argv[1],"r");
        fp2 = fopen("words", "w");

        while(1)
        {
                int count = 0;
                char word[100];
                fscanf(fp1, "%s", word);
                if(feof(fp1)) break;
                for(int i = 0; i < strlen(word); i++)
                {
                        if(isalpha(word[i]))
                                count++;
                }
                if(count == strlen(word))
                {
                        fprintf(fp2, "%s", word);
                        fprintf(fp2, "%s", "\n");

                }
        }
        return 0;
}
