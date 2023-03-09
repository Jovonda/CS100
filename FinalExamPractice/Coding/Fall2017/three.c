#include <stdio.h>
#include <stdlib.h>
double blockAvg(int **m, int size, int x1,int y1,int x2,int y2)
{
        int count = 0;
        int total = 0;
        double avg = 0;
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size; j++)
                {
                        if(i>=x1 && i<=x2)
                        {
                                if(j>=y1 && j<=y2)
                                {
                                        total += m[i][j];
                                        count++;
                                }
                        }
                }
        }
        avg = (double) total/count;

        return avg;
}
int main(int argc, char *argv[]) {
        FILE *fp = fopen(argv[1], "r");
        int size = atoi(argv[2]);
// allocate the matrix
        int **matrix;
        matrix = malloc( sizeof(int *) * size );
        for (int a=0; a<size; a++)
                matrix[a] = malloc(sizeof(int) * size);
// read the matrix
        for (int a=0; a<size; a++)
                for (int b=0; b<size; b++)
                        fscanf(fp, "%d", &matrix[a][b]);
// compute the answer
        printf("Enter coordinates : ");
        int x1, y1, x2, y2;
        scanf("%d %d %d%d", &x1, &y1, &x2, &y2);
        double answer =
                blockAvg(matrix, size, x1, y1, x2, y2);
        printf("Average: %lf\n", answer);
        return 0;
}
