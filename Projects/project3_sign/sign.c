#include <stdio.h>
#include "font5x7.h"
#include <string.h>

/*
This assignment is supposed to be
5 x 7, 5 rows 7 columns. On the pdf, however,
The rows are vertical and the columns are horizontal.
This is why there is a need for input redirection.
*/
void C_format(char s);
int main(void) 
{
    /*
    These variables will hold the first letter
    which specifies how many characters should be
    printed in each line of the sign
    either being 'C', 'W', or 'L'.

    The second letter specifies what character to 
    print in the dot matrix.
    If the second character is a '~', it will print
    the charater as the first letter.
    So example: C~ given A as the letter will print
    A as A's in a 5 x 7.
    */
    char first_l;
    char second_l;
        printf("Enter formatting code:\n");
        scanf( "%c%c",&first_l,&second_l);
        printf("This is the first letter: %c\n",first_l);
        printf("This is the second letter: %c\n",second_l);

        if(first_l == 'C')
        {
            C_format(second_l);
        }
    return 0;
}

void C_format(char s)
{
    printf("Enter message\n");

}