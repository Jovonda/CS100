// Assume the file data.txt contains the data as shown below, give the output of the following C program when run with
// ./a.out data.txt
#include <stdio.h>
#include <stdlib.h>
int *r(FILE *fp, int n)
{
        int *p=malloc(n*sizeof(int));
        for (int i=0; i<n; i++)
                fscanf(fp, "%d", p+i);
        return p;
}
int main(int argc, char *argv[])
{
        FILE *fp=fopen(argv[1], "r");
        int n;
        fscanf(fp, "%d", &n);
        int **a=malloc(n*sizeof(int *));
        for (int i=0; i<n; i++) {
                a[i]=r(fp, n);
        }
        for (int i=0; i<n; i++) {
                int t=0;
                for (int j=0; j<n-i; j++) {
                        t=t+a[i+j][j];
                }
                printf("%d: %d\n", i, t);
        }
        return 0;
}

/*
   Expected results:
   0: 12
   1: 8
   2: 13
   3: 4
   4: 3

   Actual results:
   0: 12
   1: 8
   2: 13
   3: 4
   4: 3
 */
