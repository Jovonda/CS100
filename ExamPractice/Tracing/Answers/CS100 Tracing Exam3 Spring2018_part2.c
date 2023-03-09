// What is the output of the C program below
// when run with the command ./a.out DATA
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
        FILE *fp = fopen(argv[1], "r");
        int num, data[5] = { 0 };
        fscanf(fp, "%d", &num);
        while ( !feof(fp) ) {
                if (num > 156) data[4]++;
                else if (num > 129) data[3]++;
                else if (num > 110) data[2]++;
                else if (num > 95) data[1]++;
                else if (num > 74) data[0]++;
                fscanf(fp, "%d", &num);
        }
        for (int a=0; a<5; a++) {
                printf("%d : ", a+1);
                for (int b=0; b<data[a]; b++)
                        printf("X");
                printf("\n");
        }
        return 0;
}
/*
   Expected results:
   1 : XXXX
   2 :
   3 : XX
   4 : XXX
   5 : XX

   Actual results:
   1 : XXXX
   2 :
   3 : XX
   4 : XXX
   5 : XX
 */
