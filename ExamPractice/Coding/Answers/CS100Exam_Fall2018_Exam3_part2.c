#include <stdio.h>
#include <stdlib.h>

// Fixed
int **allocateMatrix(int size)
{
								int **matrix;
								matrix = malloc(sizeof(int *) * size);
								for (int i=0; i<size; i++)
																matrix[i] = malloc(sizeof(int) * size);
								return matrix;
}

void readMatrix(FILE *fp, int **matrix, int size)
{
								for (int i=0; i<size; i++) {
																for (int j=0; j<size; j++) {
																								fscanf(fp, "%d", &matrix[i][j]);
																}
								}
}

int sumDiagonals(int **matrix, int size)
{
								//Do not know if doing only added once right
								int sum = 0;
								// int countm = 0;
								// int counto = 0;
								for(int i = 0; i < size; i++)
								{
																for(int j = 0; j < size; j++)
																{
																								if(i == j)
																								{
																																sum += matrix[i][j];
																																//countm = matrix[i][j];
																								}
																								else if(i + j == size -1)
																								{
																																sum += matrix[i][j];
																																//counto = matrix[i][j];
																								}

																}
								}
								return sum;
}

int main(int argc, char *argv[]) {
								if (argc!=2) {
																printf("Usage: %s datafile\n", argv[0]);
																return 1;
								}

								FILE *fp=fopen(argv[1], "r");
								if (fp==NULL) {
																printf("Unable to open %s for reading\n", argv[1]);
																return 2;
								}

								int **matrix;
								int size;
								fscanf(fp, "%d", &size);
								matrix = allocateMatrix(size);
								readMatrix(fp, matrix, size);

								int sum = sumDiagonals(matrix, size);
								printf("The sum is %d\n", sum);

								return 0;
}
