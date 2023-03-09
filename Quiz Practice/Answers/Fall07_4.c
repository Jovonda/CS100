// Using the data files shown below, give the output of the C program:
// The file data1 contains: 20 10 5 1
// The file data2 contains: 10 20 30 40
#include <stdio.h>
int main(void) {
        FILE *fp1 = fopen("data1", "r");
        FILE *fp2 = fopen("data2", "r");
        int a, b, c=0, d=0;
        for (int z=0; z<4; z++) {
                fscanf(fp1, "%d", &a);
                fscanf(fp2, "%d", &b);
                if (a < b)
                { c = c + a; d = d + b; }
                else
                { c = c + b; d = d + a; }
        }
        printf("%d and %d\n", c, d);
        return 0;
}
/*
   Expected Output:
   26 and 110
   ------------------------

   Actual Output:

   26 and 110


 */
