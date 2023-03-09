// Give the output of the C program shown below when run with:
// ./a.out ALABAMA CRIMSON 145
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
        int num = atoi(argv[3]);
        while (num > 0) {
                int val = num % 10;
                printf("%c %c\n",
                       argv[1][val], argv[2][val]);
                num = num / 10;
        }
        return 0;
}
/*
   Expected Output:
   M O
   A S
   L R
   ------------------------

   Actual Output:

 */
