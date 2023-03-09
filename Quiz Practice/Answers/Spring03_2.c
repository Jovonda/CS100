// What is the output of the C program shown
// below when the user enters the following data as input?
// cereal serial
#include <stdio.h>
#include <string.h>
int main(void) {
        char str1[10], str2[10];
        scanf("%s", str1);
        scanf("%s", str2);
        int len = strlen(str1);
        printf("%d\n", len);
        int num1 = 0, num2 = 0;
        for (int x=0; x<len; x++) {
                if (str1[x] == str2[x])
                        num1++;
                else
                        num2++;
        }
        printf("%d and %d\n", num1, num2);
        return 0;
}
/*
   Expected Output:
   6
   4 and 2

   ------------------------

   Actual Output:
   6
   4 and 2


 */
