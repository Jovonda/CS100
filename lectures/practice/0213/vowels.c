#include <stdio.h>
#include <string.h>

// for the parameters, do not declare just leave it blank
int vowel(char str[])
{
        int count = 0;
        for(int i = 0; i < strlen(str); i++)
        {
                switch(str[i])
                {
                case 'a':
                case 'i':
                case 'o':
                case 'e':
                case 'u':
                        count++;
                }
                //can use the one below or above and get same output
                // if (str[i] == 'a' || str[i] == 'e'||str[i] == 'i' || str[i] == 'o'|| str[i] == 'u')
                //         count++;
        }
        return count;
}

int main(int argc, char const *argv[]) {
        char word[50];
        printf("Enter a word: ");
        scanf("%s", word );
        printf("There are %d vowels in %s\n",vowel(word), word );
        return 0;
}
