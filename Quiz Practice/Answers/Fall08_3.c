// Give the output of the C program shown below when run with
// ./a.out RICHARD NIXON 246 13
#include <stdio.h>
#include <stdlib.h>
// int print(char *ptr, int n) -- waiting on answer about
void print(char *ptr, int n) {
        for (int i=n; i>0; i=i/10)
                printf("(%c)", *(ptr+i%10));
        printf("\n");
}
int main(int argc, char **argv) {
        print(*(argv+1), atoi(*(argv+3)));
        print(*(argv+2), atoi(*(argv+4)));
        return 0;
}
/*
   Expected Output:
   (D)(A)(C)
   (O)(I)
   ------------------------

   Actual Output:
   (D)(A)(C)
   (O)(I)
 */
