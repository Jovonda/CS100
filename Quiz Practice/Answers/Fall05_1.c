// What is the output of the C program shown below when the user
// enters the following input: 3 1 4 1 5 9 2 6
#include <stdio.h>
int main(void) {
        int x, info[8];
        for (int a=0; a<8; a++) {
                scanf("%d", &info[a]);
        }
        for (int a=0; a<4; a++) {
                x = info[a] + info[7-a];
                printf("%d\n", x);
        }
        return 0;
}
/*
   Expected Output:
   9
   3
   13
   6
   ------------------------

   Actual Output:

   9
   3
   13
   6


 */
