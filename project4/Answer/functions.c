#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
   Made by Jovonda Robinson 3/7/19
   In this project, you will implement a set of functions that can
   be used to retrieve information from a list of real estate transactions
   stored in a CSV (comma-separated values) file. The CSV file consists of 12 columns
   with the following column names and types.
 */
//Signatures
int getColNum(char nameOfCol[]);
void getValue(char line[], int colNumber, char colVal[]);
int conditions(char line[], int testc, char *testv[]);
//street(s),city(s),zip(s),state(s),beds(#),baths(#),sq_ft(#),type(s),sale_date(s),price(#),latitude(#),longitude(#)
char type[12]={0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1};
int isNumber(char word[]);
void removeSpace(char str[]);
void removeSpace(char str[])
{
        int len;
        len=strlen(str);
        for (int i=len-1; i>=0; i--) {
                if (!isspace(str[i])) break;
                str[i]='\0';
        }
}
//This funtion takes in the name of a column and then gives me back the number of that column
int getColNum(char nameOfCol[])
{
        //0,1,2,3,4,5,6,7,8,9,10,11 // 12 column names in total
        char colName[12][20]={"street","city","zip","state","beds","baths","sq_ft","type","sale_date","price","latitude","longitude"};

//This for loop goes through all of the columns and
//if one matches the name that was given
//it will return the number of that column
        for(int num = 0; num < 12; num++)
                if(strcmp(colName[num], nameOfCol)==0)
                        return num;
//Returns -1 if false
        return -1;
}

//This function takes in the line and the column number and saves the value of that column to colVal
void getValue(char line[], int colNumber, char colVal[])
{
        //These are three pointers, string will point to a duplicate of string
        //copy will be set to that string, and token will take in words until "," is seen
        //then it will save it to colVal
        // // remove newline
        char *string,*copy,*token;
        string = strdup(line);
        copy = string;
        char tokens[]={',', '\n'};
        //This for loop will continue getting values and slice the string
        // will be one short, that is why it is called again
        // the string that is saved to copy will be freed
        for(int num = 0; num < colNumber; num++)
        {
                token = strsep(&string, tokens);
        }
        token = strsep(&string, ",");
        strcpy(colVal,token);
        free(copy);
}
//This functions will check if the word that is in test[3*i+2] is a number or not and will return a 1 if is a number
// and a 0 if it is not and will return a -1 if it is false
int isNumber(char word[])
{
        int num = getColNum(word);
        if(num < 0 )
                return -1;
        else
                return type[num];
}
//This function will test for all of the conditions possible
int conditions(char line[], int testc, char *testv[])
{
        char colVal[100];
        //If testc == 0, give back every\row and it will be in calculations
        //tesv[2] will be printed out
        if(testc == 0)
                return 1;

        //If testc != 0, print out each for test calculations
        else if(testc != 0)
        {
                for(int num = 0; num < testc; num++)
                {
                        int number = getColNum(testv[3*num]);
                        getValue(line, number, colVal);
                        //This is the test case for ==
                        if(strcmp("==", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) != atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        //if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])!=0)
                                                return 0;
                                }
                        }
                        //This is test case for !=
                        else if(strcmp("!=", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) == atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        //if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])==0)
                                                return 0;
                                }
                        }
                        //This is test case for >=
                        else if(strcmp(">=", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) < atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        // if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])!=0)
                                                return 0;
                                }
                        }
                        //This is test case for <=
                        else if(strcmp("<=", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) > atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        // if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])!=0)
                                                return 0;
                                }
                        }
                        //This is test case for >
                        else if(strcmp(">", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) == atof(testv[3*num+2]))
                                                return 0;
                                        else if (atof(colVal) < atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        // if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])!=0)
                                                return 0;
                                }
                        }
                        //This is test case for <
                        else if(strcmp("<", testv[3*num+1])==0)
                        {
                                if(isNumber(testv[3*num]))
                                {
                                        // it does not equal return 0
                                        if(atof(colVal) == atof(testv[3*num+2]))
                                                return 0;

                                        else if (atof(colVal) > atof(testv[3*num+2]))
                                                return 0;
                                }
                                else
                                {
                                        // if it does not equal return 0
                                        if(strcmp(colVal, testv[3*num+2])!=0)
                                                return 0;
                                }
                        }
                }
        }
        //will return 1 if all test are passed
        return 1;
}
// For information on how testc and testv specify the conditions, see the project description.
//
// Given a CSV file, print out the addresses (street, city, state and zip) of the properties
// that satisfy all the specified conditions.
void printAddr(char csvfile[], int testc, char *testv[])
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        char field[100];
        int i = 1;
        fgets(line, 300, fp);
        while(1)
        {
                fgets(line, 300, fp);
                if(feof(fp)) break;
                if(conditions(line, testc, testv))
                {
                        printf("%d: ",i);
                        getValue(line, 0, field);
                        printf("%s,", field);
                        getValue(line, 1, field);
                        printf("%s,", field);
                        getValue(line, 3, field);
                        printf("%s ", field);
                        getValue(line, 2, field);
                        printf("%s", field);
                        printf("\n");
                        i++;
                }
        }
        fclose(fp);
}
// Given a CSV file, print out the coordinates (latitude and longitude) of the properties
// that satisfy all the specified conditions.
void printCoor(char csvfile[], int testc, char *testv[])
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        char field[100];
        int i = 1;
        //int len = 0;
        fgets(line, 300, fp);
        while(1)
        {
                //fgets(line, 300, fp);
                fgets(line,300,fp);
                if(feof(fp)) break;
                removeSpace(line);
                if(conditions(line, testc, testv))
                {
                        printf("%d:",i);
                        getValue(line, 10, field);
                        printf("(");
                        printf("%s,", field);
                        getValue(line, 11, field);
                        printf("%s)\n", field);
                        i++;
                }
        }
        fclose(fp);
}
// Given a CSV file, return the number of the properties that satisfy all the specified conditions.
int getCount(char csvfile[], int testc, char *testv[])
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        int i = 0;
        fgets(line, 300, fp);
        while(1)
        {
                fgets(line, 300, fp);
                if(feof(fp)) break;
                if(conditions(line, testc, testv))
                {
                        i++;
                }

        }
        fclose(fp);
        return i;

}
// Given a CSV file, return the minimum of the specified column from the properties
// that satisfy all the specified conditions through the pMin pointer.s
// A property that has a blank value for the specified column will also be excluded from the calculation.s
// The number of the properties that are included in the computation will be returned through the pCount pointer.
void getMin(char csvfile[], char column[], int testc, char *testv[], double *pMin, int *pCount)
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        char field[100];
        double min;
        int count = 0;
        int number = getColNum(column);
        fgets(line, 300, fp);
        while(1)
        {
                fgets(line, 300, fp);
                if(feof(fp)) break;
                if(conditions(line, testc, testv))
                {

                        getValue(line, number, field);
                        if(strlen(field)>0)
                        {
                                count++;
                                double field_valuen = atof(field);
                                if(count ==1 || field_valuen < min)
                                        min = field_valuen;
                        }
                }
        }
        *pMin = min;
        *pCount = count;
        fclose(fp);
}
// Given a CSV file, return the maximum of the specified column from the properties
// that satisfy all the specified conditions through the pMax pointer.
// A property that has a blank value for the specified column will also be excluded from the calculation.
// The number of the properties that are included in the computation will be returned through the pCount pointer.
void getMax(char csvfile[], char column[], int testc, char *testv[], double *pMin, int *pCount)
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        char field[100];
        double max;
        int count = 0;
        int number = getColNum(column);
        fgets(line, 300, fp);
        while(1)
        {
                fgets(line, 300, fp);
                if(feof(fp)) break;
                if(conditions(line, testc, testv))
                {

                        getValue(line, number, field);
                        if(strlen(field)>0)
                        {
                                count++;
                                double field_valuen = atof(field);
                                if(count ==1 || field_valuen >max)
                                        max = field_valuen;
                        }
                }
        }
        *pMin = max;
        *pCount = count;
        fclose(fp);
}
// Given a CSV file, return the average of the specified column from the properties
// that satisfy all the specified conditions through the pAvg pointer.
// A property that has a blank value for the specified column will also be excluded from the calculation.
// The number of the properties that are included in the computation will be returned through the pCount pointer.
void getAvg(char csvfile[], char column[], int testc, char *testv[], double *pAvg, int *pCount)
{
        FILE *fp;
        fp=fopen(csvfile, "r");
        char line[300];
        char field[100];
        double total = 0;
        double average;
        int count = 0;
        int number = getColNum(column);
        fgets(line, 300, fp);
        while(1)
        {
                fgets(line, 300, fp);
                if(feof(fp)) break;
                if(conditions(line, testc, testv))
                {

                        getValue(line, number, field);
                        if(strlen(field)>0)
                        {
                                count++;
                                double field_valuen = atof(field);
                                total += field_valuen;
                        }
                }
        }
        average = total/ count;
        *pAvg = average;
        *pCount = count;
        fclose(fp);
}
