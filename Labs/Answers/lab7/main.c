#include <stdio.h>

#include "matrix.h"

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
        printf("size=%d\n", size);
        printMatrix(matrix, size);

        printf("The average of the first row is %g\n", avgRow(matrix, size, 0) );
        printf("The average of the last row is %g\n", avgRow(matrix, size, size-1) );
        printf("The average of the first column is %g\n", avgCol(matrix, size, 0) );
        printf("The average of the last column is %g\n", avgCol(matrix, size, size-1) );
        printf("The sum of the main diagonal is %d\n", sumDiag(matrix, size, MAIN) );
        printf("The sum of the secondary diagonal is %d\n", sumDiag(matrix, size, SECONDARY) );

        freeMatrix(matrix, size);

        return 0;
}
