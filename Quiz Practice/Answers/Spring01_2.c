//What is the output of the C program shown below?
#include <stdio.h>
int main( void ) {
        int x = 2, y = 10, z;
        z = y - x;
        x = x * 3;
        y = y - 6;
        printf("%d and %d and %d\n", x, y, z);
        z = x + y + z;
        y = z / (x+y);
        x = z - y;
        printf("%d and %d and %d\n", x, y, z);
        return 0;
}
/*
   Expected Output:
   6 and 4 and 8
   17 and 1 and 18

   ------------------------

   Actual Output:
   6 and 4 and 8
   17 and 1 and 18

 */
