/*
   Made by Jovonda Robinson 2/16/19
   The program will read a formatting code followed
   by a message and then use a dot matrix font and the
   formatting code to print out a big sign that displays the message.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "font5x7.h"
void Ccode(char s, char str[]);
void Wcode(char s, char str[]);
void Lcode(char s, char str[]);
int main(void)
{
        char firstL;
        char secondL;
        char words[40];
        printf("Enter format code:\n");
        scanf(" %c%c", &firstL, &secondL);
        if(firstL== 'C')
                Ccode(secondL, words);
        else if(firstL== 'W')
                Wcode(secondL, words);
        else
                Lcode(secondL, words);
        return 0;
}
void Ccode(char s, char str[])
{
        char store_letter;
        char array[7][5];
        char newarray[8][8];
        int bit1[7],bit2[7],bit3[7],bit4[7],bit5[7];
        int number[5];
        store_letter = s;
        printf("Enter message:\n");
        while (1)
        {
                scanf("%s", str);
                if(feof(stdin))
                        break;
                //store_letter = s;
                for(int i = 0; i < strlen(str); i++)
                {
                        if(store_letter == '~')
                                s = str[i];
                        for(int j= 0; j < 5; j++)
                        {

                                // sets number to the decimal value found
                                number[j] = Font5x7[5 *(str[i] - 32) + j];

                        }
                        for(int j = 0; j< 5; j++)
                        {
                                // this takes the number and turns it into bits
                                for(int i = 0; i < 7; i++)
                                {
                                        switch(j)
                                        {
                                        case 0:
                                                bit1[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 1:
                                                bit2[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 2:
                                                bit3[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 3:
                                                bit4[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 4:
                                                bit5[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        }
                                }
                        }
                        //this makes the 2d array
                        for(int u = 0; u < 5; u++)
                        {
                                switch(u)
                                {
                                case 0:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit1[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 1:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit2[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 2:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit3[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 3:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit4[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 4:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit5[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                }
                        }
                        //this prints the 2d array
                        // for(int k = 0; k < 7; k++)
                        // {
                        //         for(int h = 0; h < 5; h++)
                        //         {
                        //                 printf("%c ", array[k][h]);
                        //         }
                        //         printf("\n");
                        // }

                        //this will set the array to 8x8 and print it out spaces are 0 for now
                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {
                                        if(h >= 5 || k >= 7)
                                                newarray[k][h]= '\0';
                                        else
                                                newarray[k][h]=array[k][h];
                                        printf("%c ", newarray[k][h]);
                                }
                                printf("\n");
                        }
                        //printf("\n");
                }

        }
}
void Wcode(char s, char str[])
{
        char store_letter = s;
        char array[7][5];
        char newarray[8][8];
        char warray[8][330];
        int bit1[7],bit2[7],bit3[7],bit4[7],bit5[7];
        int number[5];
        printf("Enter message:\n");
        while (1)
        {
                scanf("%s", str);
                if(feof(stdin))
                        break;
                for(int i = 0; i < strlen(str); i++)
                {

                        if(store_letter == '~')
                                s = str[i];
                        for(int j= 0; j < 5; j++)
                        {

                                // sets number to the decimal value found
                                number[j] = Font5x7[5 *(str[i] - 32) + j];

                        }
                        for(int j = 0; j< 5; j++)
                        {
                                // this takes the number and turns it into bits
                                for(int i = 0; i < 7; i++)
                                {
                                        switch(j)
                                        {
                                        case 0:
                                                bit1[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 1:
                                                bit2[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 2:
                                                bit3[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 3:
                                                bit4[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 4:
                                                bit5[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        }
                                }
                        }
                        //this makes the 2d array
                        for(int u = 0; u < 5; u++)
                        {
                                switch(u)
                                {
                                case 0:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit1[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 1:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit2[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 2:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit3[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 3:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit4[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 4:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit5[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                }
                        }

                        //this will set the array to 8x8 and print it out spaces are 0 for now
                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {
                                        if(h >= 5 || k >= 7)
                                                newarray[k][h]= '\0';
                                        else
                                                newarray[k][h]=array[k][h];
                                        //printf("%c ", newarray[k][h]);
                                }
                                //printf("\n");
                        }
                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {

                                        warray[k][8 *i + h]= newarray[k][h];

                                }

                        }

                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {
                                        printf("%c ", warray[k][8 * i + h]);
                                }
                                printf("\n");
                        }

                        //printf("\n");
                }
        }
}
void Lcode(char s, char str[])
{
        char store_letter = s;
        char array[7][5];
        char newarray[8][8];
        char warray[8][320];
        int bit1[7],bit2[7],bit3[7],bit4[7],bit5[7];
        int number[5];
        printf("Enter message:\n");
        while (1)
        {
                fgets(str,40,stdin);
                if(feof(stdin))
                        break;

                for(int i = 0; i < strlen(str); i++)
                {


                        if(store_letter == '~')
                                s = str[i];
                        for(int j= 0; j < 5; j++)
                        {

                                // sets number to the decimal value found
                                number[j] = Font5x7[5 *(str[i] - 32) + j];

                        }
                        for(int j = 0; j< 5; j++)
                        {
                                // this takes the number and turns it into bits
                                for(int i = 0; i < 7; i++)
                                {
                                        switch(j)
                                        {
                                        case 0:
                                                bit1[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 1:
                                                bit2[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 2:
                                                bit3[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 3:
                                                bit4[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        case 4:
                                                bit5[i] = number[j]%2;
                                                number[j] = number[j]/2;
                                                break;
                                        }
                                }
                        }
                        //this makes the 2d array
                        for(int u = 0; u < 5; u++)
                        {
                                switch(u)
                                {
                                case 0:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit1[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 1:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit2[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 2:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit3[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 3:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit4[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                case 4:
                                        for(int l = 0; l < 7; l++)
                                        {
                                                if(bit5[l] == 1)
                                                        array[l][u] = s;
                                                else
                                                        array[l][u] = '\0';
                                        }
                                        break;
                                }
                        }

                        //this will set the array to 8x8 and print it out spaces are 0 for now
                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {
                                        if(h >= 5 || k >= 7)
                                                newarray[k][h]= '\0';
                                        else
                                                newarray[k][h]=array[k][h];
                                        //printf("%c ", newarray[k][h]);
                                }
                                //printf("\n");
                        }
                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {

                                        warray[k][8 *i + h]= newarray[k][h];

                                }

                        }

                        for(int k = 0; k < 8; k++)
                        {
                                for(int h = 0; h < 8; h++)
                                {
                                        printf("%c ", warray[k][8 * i + h]);
                                }
                                printf("\n");
                        }

                }
        }
}
