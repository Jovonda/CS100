#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

// Given the size of a square matrix, allocates space for the matrix,
// and return the pointer to the matrix.
int **allocateMatrix(int size)
{
        int **x=malloc(size*sizeof(int*));
        for (int i=0; i<size; i++) {
                x[i]=malloc(size*sizeof(int));
        }
        return x;
}

// Free the space allocated for the matrix.
void freeMatrix(int **matrix, int size)
{
        for (int i=0; i<size; i++)
                free(matrix[i]);
}

// Populate the matrix using the data read from the specified file.
void readMatrix(FILE *fp, int **matrix, int size)
{
        int num;
        for (int i=0; i<size; i++) {
                for (int j=0; j<size; j++) {
                        fscanf(fp, "%d", &num);
                        matrix[i][j]= num;
                }
        }
}

// Print out the matrix on standard output.
void printMatrix(int **matrix, int size)
{
        for (int i=0; i<size; i++) {
                for (int j=0; j<size; j++) {
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }
}

// Compute the average of all the elements in row r.
double avgRow(int **matrix, int size, int r)
{
        double average = 0;
        for(int j = 0; j < size; j++)
        {
                average += matrix[r][j];
        }
        return average/size;
}

// Compute the average of all the elements in column c.
double avgCol(int **matrix, int size, int c)
{
        double average = 0;
        for(int j = 0; j < size; j++)
        {
                average += matrix[j][c];
        }
        return average/size;
}

// Compute the sum of all the elements in the main or secondary diagonal.
// If dir is 1, it is for main diagonal (from top-left to bottom-right).
// If dir is 2, it is for secondary diagonal (from top-right to bottom-left).
int sumDiag(int **matrix, int size, int dir)
{
        int sum = 0;
        if(dir == 1)
        {
                for (int i=0; i<size; i++) {
                        for (int j=0; j<size; j++) {
                                if(i==j)
                                {
                                        sum += matrix[i][j];
                                }
                        }
                }
        }
        else if(dir == 2)
        {
                for (int i=0; i<size; i++) {
                        for (int j=0; j<size; j++) {
                                if(i+j == size-1)
                                {
                                        sum += matrix[i][j];
                                }
                        }
                }
        }
        return sum;
}
