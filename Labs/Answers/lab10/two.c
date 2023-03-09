#include <stdio.h>

// Find the largest character of a non-empty string
char maxCharOfString(char *str)
{
        char max;
        if(*str == '\0')
                return '\0';
        max = maxCharOfString(str+1);
        if(max < *str)
                max = *str;
        return max;
}

// Find the largest character of an array of strings
char maxCharOfStringArray(int num, char *array[])
{
        char max;
        char maxoflast;
        if(num == 1)
                return maxCharOfString(array[0]);
        max = maxCharOfString(array[num-1]);
        maxoflast = maxCharOfStringArray(num-1, array);
        if(max > maxoflast)
                return max;
        else
                return maxoflast;

}

int main(int argc, char *argv[])
{
        if (argc==1) {
                printf("%s requires at least one argument\n", argv[0]);
                return 1;
        }

        printf("The largest character of all arguments is %c\n",
               maxCharOfStringArray(argc-1, argv+1));

        return 0;
}
