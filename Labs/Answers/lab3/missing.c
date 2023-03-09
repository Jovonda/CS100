#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        const int LETTER = 26;
        char alpha[26];
        char word[50];
        int i, j;
        int counter = 0;
        int count[26] = {0};

        for(i = 0; i < LETTER; i++ )
        {
                alpha[i] = (char)(97 + i);
        }
        printf("Enter your input:\n");
        while(1)
        {
                scanf("%s",word);
                for(i = 0; i< strlen(word); i++)
                {

                        for(j = 0; j <LETTER; j++ )
                        {
                                if(word[i] == alpha[j])
                                        count[j]++;

                        }
                }

                if(feof(stdin))
                        break;
        }
        printf("Missing Letters: ");
        for(i = 0; i < LETTER; i++)
        {
                if(count[i] == 0)
                        printf("%c ", alpha[i]);
                else if(count[i] !=0)
                {
                        counter++;
                        if(counter >= LETTER)
                                printf("Your input contains all the letters\n");
                }
        }
        printf("\n");
        return 0;
}
