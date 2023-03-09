#ifndef _MATRIX_H_
#define _MATRIX_H_

#define MAIN      1
#define SECONDARY 2

// Given the size of a square matrix, allocates space for the matrix,
// and return the pointer to the matrix.
int **allocateMatrix(int size);

// Free the space allocated for the matrix.
void freeMatrix(int **matrix, int size);

// Populate the matrix using the data read from the specified file.
void readMatrix(FILE *fp, int **matrix, int size);

// Print out the matrix on standard output.
void printMatrix(int **matrix, int size);

// Compute the average of all the elements in row r.
double avgRow(int **matrix, int size, int r);

// Compute the average of all the elements in column c.
double avgCol(int **matrix, int size, int c);

// Compute the sum of all the elements in the main or secondary diagonal.
// If dir is 1, it is for main diagonal (from top-left to bottom-right).
// If dir is 2, it is for secondary diagonal (from top-right to bottom-left).
int sumDiag(int **matrix, int size, int dir);

#endif
