/*
   Made by Jovonda Robinson 3/25/19
   In this project, I wrote a program
   to solve a simple word search puzzle.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Signatures
int getInt(char file[]);
char** allocSpace(int size);
char** getPuzzle(char file[],int num);
char** getAnswer(int num);
void printArray(char **x, int num);
void findword(char *str,char **x,int num, char **answer);
void freeSpace(char **x, int num);
int north_d(char *str,char **x,int num, char **answer);
int south_d(char *str,char **x,int num, char **answer);
int east_d(char *str,char **x,int num, char **answer);
int west_d(char *str,char **x,int num, char **answer);
int northeast_d(char *str,char **x,int num, char **answer);
int southeast_d(char *str,char **x,int num, char **answer);
int southwest_d(char *str,char **x,int num, char **answer);
int northwest_d(char *str,char **x,int num, char **answer);

//Functions
int getInt(char file[])
{
        FILE *fp;
        fp = fopen(file, "r");
        int n = 0;
        while(1)
        {
                char ch = fgetc(fp);
                if(isspace(ch))
                {
                        //n=n-1;
                        break;
                }
                n++;
        }
        //n = n - 1;
        fclose(fp);
        return n;
}
char** allocSpace(int size)
{
        //printf("Inside allocSpace function\n");
        char**x= (char**)malloc(size * sizeof(char*));
        for (int i=0; i<size; i++) {
                x[i]=(char*)malloc(size * sizeof(char));
        }
        return x;
}
char** getPuzzle(char file[],int num)
{
        //printf("Inside getArray function\n");
        // printf("The word puzzle is:\n");
        FILE *fp;
        fp = fopen(file, "r");
        char**x=allocSpace(num);
        for (int i=0; i<num; i++) {
                for (int j=0; j<num; j++) {
                        char ch;
                        fscanf(fp, " %c", &ch);
                        x[i][j]=ch;
                }
        }
        return x;
}

char** getAnswer(int num)
{
        //printf("Inside getAnswer function\n");
        // printf("The word puzzle is:\n");
        char ch = '-';
        char**y=allocSpace(num);
        for (int i=0; i<num; i++) {
                for (int j=0; j<num; j++) {
                        y[i][j]=ch;
                }
        }
        return y;
}
void printArray(char **x, int num)
{
        //printf("Inside printArray function\n");
        // printf("The word puzzle is:\n");
        for (int i=0; i<num; i++) {
                for (int j=0; j<num; j++) {
                        printf("%c", x[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}
void findword(char *str,char **x,int num, char **answer)
{
        int northCount =north_d(str,x,num,answer);
        int southCount =south_d(str,x,num,answer);
        int eastCount = east_d(str,x,num,answer);
        int westCount = west_d(str,x,num,answer);
        int northECount = northeast_d(str,x,num,answer);
        int southECount = southeast_d(str,x,num,answer);
        int southWCount = southwest_d(str,x,num,answer);
        int northWCount = northwest_d(str,x,num,answer);
        printf("\"%s\" was found as below.\n", str);
        printf("%d times in the northward direction\n", northCount);
        printf("%d times in the southhward direction\n", southCount);
        printf("%d times in the eastward direction\n", eastCount);
        printf("%d times in the westward direction\n", westCount);
        printf("%d times in the northeastward direction\n", northECount);
        printf("%d times in the southeastward direction\n", southECount);
        printf("%d times in the southwestward direction\n", southWCount);
        printf("%d times in the northwestward direction\n", northWCount);
        printf("\n");
        printArray(answer, num);
}
int north_d(char *str,char **x,int num, char **answer)
{
        int counter = 0;
        for(int i = 0; i < num; i++)
        {
                for(int j = 0; j < num; j++)
                {
                        int found = 1;
                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(i-k < 0)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i-k][j] != str[k])
                                {
                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i-k][j] = x[i-k][j];
                                }
                        }
                }
        }
        return counter;

}
int south_d(char *str,char **x,int num, char **answer)
{
        int counter = 0;

        for(int i = 0; i < num; i++)
        {

                for(int j = 0; j < num; j++)
                {
                        int found = 1;

                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(i+k >=num)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i+k][j] != str[k])
                                {

                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i+k][j] = x[i+k][j];

                                }
                        }
                }
        }
        return counter;
}
int east_d(char *str,char **x,int num, char **answer)
{
        int counter = 0;
        for(int i = 0; i < num; i++)
        {
                for(int j = 0; j < num; j++)
                {
                        int found = 1;
                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(j+k>= num)
                                {

                                        found = 0;
                                        break;
                                }
                                else if(x[i][j+k] != str[k])
                                {
                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i][j+k] = x[i][j+k];
                                }
                        }
                }
        }
        return counter;

}
int west_d(char *str,char **x,int num, char **answer)
{
        int counter = 0;
        for(int i = 0; i < num; i++)
        {
                for(int j = num-1; j > 0; j--)
                {
                        int found = 1;
                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(j-k < 0)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i][j-k] != str[k])
                                {
                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i][j-k] = x[i][j-k];
                                }
                        }
                }
        }
        return counter;

}
int northeast_d(char *str,char **x,int num, char **answer)
{

        int counter = 0;
        for(int i = 0; i < num; i++)
        {
                for(int j = 0; j < num; j++)
                {
                        int found = 1;
                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(i-k < 0 || j+k >= num)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i-k][j+k] != str[k])
                                {
                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i-k][j+k] = x[i-k][j+k];
                                }
                        }
                }
        }
        return counter;
}
int southeast_d(char *str,char **x,int num, char **answer)
{

        int counter = 0;
        for(int i = 0; i < num; i++)
        {

                for(int j = 0; j < num; j++)
                {
                        int found = 1;

                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(i+k >= num || j+k >=num)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i+k][j+k] != str[k])
                                {

                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i+k][j+k] = x[i+k][j+k];

                                }
                        }
                }
        }
        return counter;
}
int southwest_d(char *str,char **x,int num, char **answer)
{

        int counter = 0;

        for(int i = 0; i < num; i++)
        {

                for(int j = num-1; j > 0; j--)
                {
                        int found = 1;

                        for (int k = 0; k < strlen(str); k++)
                        {
                                if(i+k>= num || j-k < 0)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i+k][j-k] != str[k])
                                {

                                        found = 0;
                                        break;
                                }

                        }
                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i+k][j-k] = x[i+k][j-k];
                                }
                        }
                }
        }
        return counter;
}
int northwest_d(char *str,char **x,int num, char **answer)
{

        int counter = 0;
        for(int i = 0; i < num; i++)
        {
                for(int j = num-1; j > 0; j--)
                {
                        int found = 1;
                        for (int k = 0; k < strlen(str); k++)
                        {

                                if(i-k < 0 || j-k < 0)
                                {
                                        found = 0;
                                        break;
                                }
                                if(x[i-k][j-k] != str[k])
                                {
                                        found = 0;
                                        break;
                                }


                        }

                        if(found == 1)
                        {
                                counter++;
                                for (int k = 0; k < strlen(str); k++)
                                {
                                        answer[i-k][j-k] = x[i-k][j-k];
                                }
                        }

                }
        }
        return counter;
}
void freeSpace(char **x, int num)
{
        for (int i=0; i<num; i++)
                free(x[i]);
}
int main(int argc, char *argv[])
{
        int arraySize = getInt(argv[1]);
        char **puzzle;
        char **answer;
        puzzle = getPuzzle(argv[1],arraySize);

        printf("The word puzzle is:\n");
        printArray(puzzle, arraySize);
        char word[101];
        //This is for seeing all the words
        //In one grid
        //answer = getAnswer(arraySize);

        while(1)
        {
                //This is for seeing the word one time, MAKE SURE TO UN COMMENT THIS AND
                //GET RID OF THE ONE OUTSIDE OF THE WHILE LOOP BEFORE TURNING IT IN
                answer = getAnswer(arraySize);
                printf("Enter a word to search in the puzzle (or CRTL-D to exit): ");
                scanf("%s",word);
                printf("\n");
                if(feof(stdin))
                        break;
                findword(word, puzzle, arraySize, answer);


        }
        freeSpace(puzzle, arraySize);
        freeSpace(answer, arraySize);


        return 0;
}
