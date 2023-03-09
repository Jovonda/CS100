#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        char words[50];
        int freq[50]= {0};
        int counter = 0;
        printf("Enter a string\n");
        scanf("%s",words );

        for(int i = 0; i < strlen(words); i++)
        {
                for(int j = 0; j < strlen(words); j++)
                {
                        if (words[i]==words[j])
                        {
                                freq[i]++;
                        }

                }
        }
        printf("Unique characters include:");
        for(int a = 0; a< strlen(words); a++)
        {
                if(freq[a] == 1)
                {
                        printf(" %c ", words[a]);
                }
                else
                {
                        counter++;
                }

                if(counter == strlen(words))
                {
                        printf(" NONE\n");
                }
        }

        return 0;
}
