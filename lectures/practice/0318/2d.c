#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInt(char prompt[])
{
        int n;
        printf("%s", prompt);
        scanf("%d", &n);
        return n;
}

int** allocSpace(int numRows, int numCols)
{
        int **x=malloc(numRows*sizeof(int*));
        for (int i=0; i<numRows; i++) {
                x[i]=malloc(numCols*sizeof(int));
        }
        return x;
}
//The numCols is not needed
void freeSpace(int **x, int numRows, int numCols)
{
        for (int i=0; i<numRows; i++)
                free(x[i]);
}
int** getArray(int numRows, int numCols)
{
        int **x=allocSpace(numRows, numCols);
        srand(time(NULL));
        for (int i=0; i<numRows; i++) {
                for (int j=0; j<numCols; j++) {
                        x[i][j]=rand()%100;
                }
        }
        return x;
}

void printArray(int **x, int numRows, int numCols)
{
        for (int i=0; i<numRows; i++) {
                for (int j=0; j<numCols; j++) {
                        printf("%3d", x[i][j]);
                }
                printf("\n");
        }
}

void findMinMax(int **x, int numRows, int numCols, int *pMin, int *pMax)
{
        int min=x[0][0];
        int max=x[0][0];
        //Always start with 0
        for (int i=0; i<numRows; i++)
        {
                for (int j=0; j<numCols; j++)
                {
                        if (x[i][j]>max) max=x[i][j];
                        if (x[i][j]<min) min=x[i][j];
                }
        }
        //printf("In findMinMax, min=%d, max=%d\n", min, max);
        *pMin=min;
        *pMax=max;
}
//If want to find one value, use the funtion return, else use a pointer
int findMin(int **x, int numRows, int numCols)
{
        int min=x[0][0];
        //Always start with 0
        for (int i=0; i<numRows; i++)
                for (int j=0; j<numCols; j++)
                        if (x[i][j]<min) min=x[i][j];
        //printf("In findMinMax, min=%d, max=%d\n", min, max);
        return min;
}

// void findMinMax2(int x[], int size, int extreme[])
// {
//         int min=x[0];
//         int max=x[0];
//         for (int i=1; i<size; i++) {
//                 if (x[i]>max) max=x[i];
//                 if (x[i]<min) min=x[i];
//         }
//         printf("In findMinMax2, min=%d, max=%d\n", min, max);
//         extreme[0]=min;
//         extreme[1]=max;
// }

// void swap(int *pFirst, int *pSecond)
// {
//         int temp=*pFirst;
//         *pFirst=*pSecond;
//         *pSecond=temp;
// }


int **transpose(int **x, int numRows, int numCols)
{
        int **y = allocSpace(numCols, numRows);
        for (int i=0; i<numRows; i++)
                for (int j=0; j<numCols; j++)
                        y[j][i]=x[i][j];
        return y;
}

int main(void)
{
        int numRows=getInt("Enter the number of rows: ");
        int numCols=getInt("Enter the number of columns: ");
        int **x;
        x=getArray(numRows, numCols);
        printArray(x, numRows, numCols);


        int min=1000, max=-1000;
        findMinMax(x, numRows, numCols, &min, &max);
        printf("Min is %d, Max is %d\n", min, max);
        printf("Min is %d\n", findMin(x, numRows, numCols));

        int **y=transpose(x, numRows, numCols);
        printArray(y, numCols, numRows);

        freeSpace(x, numRows, numCols);
        freeSpace(y, numCols, numRows);


        return 0;
}
