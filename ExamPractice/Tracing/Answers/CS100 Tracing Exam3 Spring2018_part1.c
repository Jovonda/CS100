// What is the output of the C program shown below
// when run with the command
// ./a.out BBACA AU RMONSIC DTIE 010
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
        for (int a=1; a<argc; a++) {
                int len = strlen(argv[a]) - 1;
                int x = 0, y = len;
                while (x <= y) {
                        if (x == y)
                                printf("%c", argv[a][x]);
                        else
                                printf("%c%c", argv[a][y],argv[a][x]);
                        x = x + 1;
                        y = y - 1;
                }
                printf("\n");
        }
        return 0;
}
/*
   Expected results:
   ABCBA
   UA
   CRIMSON
   EDIT
   001

   Actual results:
   ABCBA
   UA
   CRIMSON
   EDIT
   001
 */
