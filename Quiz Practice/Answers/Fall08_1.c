// Give the output of the C program shown below when run with
// ./a.out Crimson Tide
#include <stdio.h>
#include <string.h>
int main( int argc, char *argv[] ) {
        for (int a=1; a<argc; a++) {
                int z = a;
                while ( z < strlen(argv[a]) ) {
                        printf("%c ", argv[a][z]);
                        z = z + 2;
                }
                printf("\n");
        }
        return 0;
}
/*
   Expected Output:
   r m o
   d
   ------------------------

   Actual Output:

   r m o
   d


 */
