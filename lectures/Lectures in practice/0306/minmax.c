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

int** getArray(int numRows, int numCols)
{
        int **x=malloc(numRows*sizeof(int*));
        for (int i=0; i<numRows; i++) {
                x[i]=malloc(numCols*sizeof(int));
        }

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

void findMinMax(int x[], int size, int *pMin, int *pMax)
{
        int min=x[0];
        int max=x[0];
        for (int i=1; i<size; i++) {
                if (x[i]>max) max=x[i];
                if (x[i]<min) min=x[i];
        }
        printf("In findMinMax, min=%d, max=%d\n", min, max);
        *pMin=min;
        *pMax=max;
}

void findMinMax2(int x[], int size, int extreme[])
{
        int min=x[0];
        int max=x[0];
        for (int i=1; i<size; i++) {
                if (x[i]>max) max=x[i];
                if (x[i]<min) min=x[i];
        }
        printf("In findMinMax2, min=%d, max=%d\n", min, max);
        extreme[0]=min;
        extreme[1]=max;
}

void swap(int *pFirst, int *pSecond)
{
        int temp=*pFirst;
        *pFirst=*pSecond;
        *pSecond=temp;
}

// void reverseArray(int x[], int size)
void reverseArray(int *x, int size)
{
        // for (int a=0, b=size-1; a<b ; a++, b--) {
        for (int *pa=x, *pb=x+size-1; pa<pb; pa++, pb--) {
                swap(pa, pb);
        }
}

int main(void)
{
        int numRows=getInt("Enter the number of rows: ");
        int numCols=getInt("Enter the number of columns: ");
        int **x;
        x=getArray(numRows, numCols);
        printArray(x, numRows, numCols);

/*
   int min=1000, max=-1000;
   printf("Min is %d, Max is %d\n", min, max);
   findMinMax(x, size, &min, &max);
   printf("Min is %d, Max is %d\n", min, max);

   int ex[2];
   findMinMax2(x, size, ex);
   printf("Min is %d, Max is %d\n", ex[0], ex[1]);

   reverseArray(x, size);
   printArray(x, size);

   free(x);
 */

        return 0;
}
