// Using the files shown at the right,
// give the output of the C program shown below
// one two
// 5   3
// 4   6
// 7   9
// 9   2
// 2   7
// 8   4

#include <stdio.h>
int main(void) {
        int a, num1, num2;
        FILE *F1 = fopen("one", "r");
        fscanf(F1, "%d", &num1);
        FILE *F2 = fopen("two", "r");
        fscanf(F2, "%d", &num2);
        for (a=1; a<6; a++) {
                if (num1 > num2) {
                        printf("%d\n", num1);
                        fscanf(F2, "%d", &num2);
                }
                else {
                        printf("%d\n", num2);
                        fscanf(F1, "%d", &num1);
                }
        }
        fclose(F1);
        fclose(F2);
        return 0;
}
/*
   Expected:
   5
   6
   6
   7
   9

   ----------------------------

   Actual:
   5
   6
   6
   7
   9

 */
