// Using the data files shown below, give the output of the C program:
// The file data1 contains: 10 20 0 5 15
// The file data2 contains: 5 15 25 15 5
#include <stdio.h>
int main(void) {
        FILE *fp1 = fopen("data1", "r");
        FILE *fp2 = fopen("data2", "r");
        int a, b, c, d;
        fscanf(fp1, "%d", &c);
        fscanf(fp2, "%d", &d);
        for (int z=0; z<4; z++) {
                fscanf(fp1, "%d", &a);
                fscanf(fp2, "%d", &b);
                if (a < c) c = a;
                if (b > d) d = b;
        }
        printf("%d and %d\n", c, d);
        fclose(fp1);
        fclose(fp2);
        return 0;
}
/*
   Expected Output:
   0 and 25
   ------------------------

   Actual Output:
   0 and 25
 */
