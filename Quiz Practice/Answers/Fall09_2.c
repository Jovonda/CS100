//Give the output of the C program shown below:
#include <stdio.h>
int main(void) {
        int data[2][4] = { {1,2,3,4}, {5,4,3,2} };
        int x = 0, y = 0;
        for (int a=0; a<2; a++) {
                for (int b=0; b<4; b++) {
                        if ( (a+b)%2 == 0 )
                                x = x + data[a][b];
                        else
                                y = y + data[a][b];
                }
        }
        printf("%d and %d\n", x, y);
        return 0;
}
/*
   Expected Output:
   10 and 14
   ------------------------

   Actual Output:

   10  and 14


 */
