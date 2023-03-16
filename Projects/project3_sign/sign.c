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
void W_format(char s);
void L_format(char s);
void decimal_to_binary(int *array, int number);
int gethex(char l, int num);
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
    scanf("%c%c", &first_l, &second_l);
    printf("This is the first letter: %c\n", first_l);
    printf("This is the second letter: %c\n", second_l);
    printf("Enter message\n");
    if (first_l == 'C')
    {
        C_format(second_l);
    }
    else if (first_l == 'W')
    {
        W_format(second_l);
    }
    else
    {
        L_format(second_l);
    }
    return 0;
}

/*
    The program will print one space between
    two words in output.
    Since I can print only one character in
    each output line, I will print the space in its
    own line or simply print out a blank line.
*/
void C_format(char s)
{
    printf("Here in C_format function\n");
    char str[40];
    char Carray[8][8] = {0};
    int array[7] = {0};
    int hex;
    int count = 0;
    while (!feof(stdin))
    {
        //This prevents buffer overflow, because scanf is unsafe
        scanf("%39s", str);
        //printf("You entered: %s\n", str);
        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = 0; j < 5; j++)
            {
                hex = gethex(str[i], j);
                decimal_to_binary(array, hex);
                for (int i = count; i < count + 1; i++)
                {
                    for (int j = 0; j < 7; j++)
                    {
                        Carray[i][j] = array[j];
                    }
                }
                count++;
                if (count == 5)
                {
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            if (Carray[j][i] != 0)
                            {
                                printf("%c", s);
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            Carray[j][i] = 0;
                        }
                    }
                    count = 0;
                }

                for (int i = 6; i >= 0; i--)
                {
                    array[i] = 0;
                }
            }
        }
        printf("\n");
    }
}

/*
    Each line of the sign contains only one word.
*/
void W_format(char s)
{
    printf("Here in W_format function\n");
    char str[40];
    while (!feof(stdin))
    {
        scanf("%s", str);
        printf("You entered: %s\n", str);
    }
}

/*
    Each line of the message will be printed directly
    as an ouput line in the sign.
*/
void L_format(char s)
{
    printf("Here in L_format function\n");
    char line[40];
    while (fgets(line, 100, stdin))
    {
        // Remove newline character from end of string
        line[strcspn(line, "\n")] = '\0';

        // Do something with the string
        printf("Input string: %s\n", line);
    }
}

/*
    This functions just takes a decimal and returns a binary number
*/
void decimal_to_binary(int *array, int number)
{
    for (int i = 0; i < 7; i++)
    {
        array[i] = number % 2;
        number = number / 2;
        if (number == 0)
        {
            break;
        }
    }
}

/*
    This function gets the 5 rows that make up that
    letter.
*/
int gethex(char l, int num)
{
    int number = 0;
    number = Font5x7[5 * (l - 32) + num];
    return number;
}