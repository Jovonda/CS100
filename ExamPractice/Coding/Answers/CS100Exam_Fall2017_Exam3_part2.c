#include <stdio.h>
#include <stdlib.h>
// Now it works, thank God
int sumBorders(int **x, int n)
{
        int sum = 0;
        for(int i= 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        if(i == 0 || i == n-1)
                                sum += x[i][j];
                        else if(j == 0 || j == n-1)
                                sum += x[i][j];
                }
        }
        return sum;
}
int main(int argc, char *argv[]) {
        FILE *fp = fopen(argv[1], "r");
        int size = atoi(argv[2]);
// allocate the matrix
        int **matrix = malloc(sizeof(int *) * size);
        for (int a=0; a<size; a++)
                matrix[a] = malloc(sizeof(int) * size);
// read the matrix
        for (int a=0; a<size; a++)
                for (int b=0; b<size; b++)
                        fscanf(fp, "%d", &matrix[a][b]);
// compute the answer
        int answer = sumBorders(matrix, size);
        printf("The answer is %d\n", answer);
        return 0;
}
