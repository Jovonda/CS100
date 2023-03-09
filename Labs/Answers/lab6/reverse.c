#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main(void)
{
        char str[100];
        printf("Enter a string: ");
        scanf("%s", str);

        reverse(str);

        printf("The reverse of your input string is \"%s\"\n", str);

        return 0;
}

// Do not change anything above this line
//
// Reverse the string pointed by str. For example,
// if the input string is CRIMSON, its reverse is NOSMIRC.
// If the input string is TIDE, its reverse is EDIT.
void reverse(char *str)
{
        // add your code here
        // No [] allowed in this function

        int len=strlen(str);
        for (int i=0; i < len/2; i++)
        {

                char temp = *(str+i);
                *(str+i)= *(str+(len-1) -i);
                *(str+(len-1)-i) = temp;
        }
}
