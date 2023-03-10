#include <stdio.h>
#include "font5x7.h"
#include <string.h>

int main(int argc, char const *argv[]) {
        char word[40];
        char carray[8][8] ={0};
        char array[5][7];
        int number[5];
        int bit[7];
        char letter = 'J';

        // for(int a= 0; a < 7; a++)
        // {
        //         for(int b = 0; b < 5; b++)
        //         {
        //                 // if(a >=5 || b >=7)
        //                 array[a][b] = letter;
        //                 printf("%c ", array[a][b]);
        //         }
        //         printf("\n");
        // }


        while (1)
        {
                scanf("%s",word);
                if (feof(stdin))
                        break;
                for (int i = 0; i < strlen(word); i++)
                {
                        for(int j = 0; j < 5; j++)
                        {
                                number[j]= Font5x7[5*(word[i]-32)+j];
                                for (int h = 0; h < 7; h++)
                                {
                                        bit[h]= number[j]%2;
                                        number[j]= number[j]/2;
                                        if(bit[h]== 1)
                                                bit[h] = letter;
                                        else
                                                bit[h] = '\0';
                                        // array[j][h] = bit[h];
                                        // printf("%c", array[j][h]);

                                        //         for(int b = 0; b < 5; b++)
                                        //         {
                                        //                 // if(a >=5 || b >=7)
                                        //                 array[a][b] = bit[a];
                                        //                 printf("%c ", array[a][b]);
                                        //         }
                                }
                                //printf("\n");
                        }
                        // for(int a= 0; a < 7; a++)
                        // {
                        //         for(int b = 0; b < 5; b++)
                        //         {
                        //                 // if(a >=5 || b >=7)
                        //                 array[a][b] = bit[a];
                        //                 printf("%c ", array[a][b]);
                        //         }
                        //         printf("\n");
                        // }
                        // for(int l = 0; l < 8; l++)
                        // {
                        //         for(int m = 0; m < 8; m++)
                        //         {
                        //                 // if(m >=5 ||l>=7)
                        //                 //         carray[l][m] = '\0';
                        //                 // else
                        //                 carray[l][m] = array[l][m];
                        //                 printf("%c", carray[l][m]);
                        //         }
                        //         printf("\n");
                        // }
                }
        }
        return 0;
}
