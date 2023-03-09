#include <stdio.h>

void shift(int *pA, int *pB, int *pC);

int main (void) {
        printf("Enter any three integers: ");
        int num1, num2, num3;
        scanf("%d%d%d", &num1, &num2, &num3);

        shift(&num1, &num2, &num3);
        printf("The results after one shift: %d %d %d\n", num1, num2, num3);

        shift(&num1, &num2, &num3);
        printf("The results after another shift: %d %d %d\n", num1, num2, num3);

        return 0;
}

// Do not change anything above this line
//
// The first value shifts to the second,
// the second shifts to the third.
// and the third becomes the first.
void shift(int *pA, int *pB, int *pC)
{
        int num1 = *pA;
        int num2 = *pB;
        int num3 = *pC;

        int newNum1, newNum2, newNum3;

        newNum1 = num3;
        newNum2 = num1;
        newNum3 = num2;

        *pA=newNum1;
        *pB=newNum2;
        *pC=newNum3;

}
