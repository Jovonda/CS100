// Give the output of the C program shown below when run with
// ./a.out ROLL TIDE ROLL ALABAMA
#include <stdio.h>
#include <string.h>
int main( int argc, char *argv[] ) {
        for (int a=1; a<argc; a++) {
                for (int b=0; b<a; b++) {
                        printf("%c ", argv[a][b]);
                }
                printf("\n");
        }
        return 0;
}

/*
   Expected Output:
   R
   T I
   R O L
   A L A B
   ------------------------

   Actual Output:
   R
   T I
   R O L
   A L A B
 */
