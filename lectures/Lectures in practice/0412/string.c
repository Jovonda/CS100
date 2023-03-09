#include <string.h>
#include <ctype.h>
#include <stdio.h>

int length (char str[])
{
        //This is empty string, length is zero
        if(str[0] == '\0') return 0;

        //There is something in the string, add 1
        return 1 + length(str+1);
}

int countLetters(char *str)
{
        //Empty string, return 0
        if(*str == '\0') return 0;

//There is a letter return 1 + countLetters(str+1);
        if(isalpha(*str))
                return 1+countLetters(str+1);

        else
                return countLetters(str+1);
}

int countAs(char *str)
{
        //Empty string, return 0
        if(*str == '\0') return 0;

//There is a letter return 1 + countLetters(str+1);
        if(*str == 'A')
                return 1+countAs(str+1);

        else
                return countAs(str+1);
}

int countChars(char *str, char c)
{
        //Empty string, return 0
        if(*str == '\0') return 0;

//There is a letter return 1 + countLetters(str+1);
        if(*str == c)
                return 1+countChars(str+1,c);

        else
                return countChars(str+1,c);
}

int main(int argc, char *argv[])
{
        for(int i = 1; i < argc; i++)
        {
                printf("length(%s)=%d\n", argv[i], length(argv[i]));
                printf("countLetters(%s)=%d\n", argv[i], countLetters(argv[i]));
                printf("countAs(%s)=%d\n", argv[i], countAs(argv[i]));
                for(char c = 'a'; c < 'z'; c++)
                        printf("countChars(%s, %c)=%d\n", argv[i], c, countChars(argv[i], c));
        }
        return 0;
}
