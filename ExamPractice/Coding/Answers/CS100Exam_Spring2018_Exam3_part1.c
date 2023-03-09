#include <stdio.h>
#include <stdlib.h>
int **allocateArray(int r, int c) {
        int **array = (int **) malloc (sizeof(int *)*r);
        for (int a=0; a<r; a++)
                array[a] = (int *) malloc (sizeof(int) * c);
        return array;
}
void readArray(int **array, int r, int c) {
        for (int a=0; a<r; a++)
                for (int b=0; b<c; b++)
                        scanf("%d", &array[a][b]);
        return;
}
void printArray(int **array, int r, int c) {
        for (int a=0; a<r; a++) {
                for (int b=0; b<c; b++)
                        printf("%d ", array[a][b]);
                printf("\n");
        }
        return;
}
int count(int **data, int r, int c, int num)
{
        int count = 0;
        for (int a=0; a<r; a++)
                for (int b=0; b<c; b++)
                        if( data[a][b] == num)
                                count++;

        return count;
}
int hasDups(int **data, int r, int c)
{
        for (int a=0; a<r; a++)
                for (int b=0; b<c; b++)
                        if(count(data, r, c, data[a][b]) > 1)
                                return 1;

        return 0;
}
// returns 1 if duplicate values exist, else 0
int main(void) {
        int **data = allocateArray(5,5);
        readArray(data, 5, 5);
        printArray(data, 5, 5);
        if ( hasDups(data, 5, 5) )
                printf("The matrix has duplicate values\n");
        else
                printf("No duplicates found\n");
        return 0;
}
