#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
        FILE *fp = fopen(argv[1], "r");
        int a, b, c, d, e;
        for (a = 2; a < argc; a++) {
                e = 0;
                c = atoi(argv[a]);
                for (b=0; b<c; b++) {
                        fscanf(fp, "%d", &d);
                        e = e + d;
                }
                printf("%d\n", e);
        }
        return 0;
}
/*
   Expected:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]

   Actual:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]
 */
