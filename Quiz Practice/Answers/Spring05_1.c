// What is the output of the C program shown below
// when the user enters the following input:
// ABCDE 3 1 4 1 0
#include <stdio.h>
#include <string.h>
int main(void) {
        char str[10];
        int a, nums[5];
        scanf("%s", str);
        for (a=0; a<5; a++) {
                scanf("%d", &nums[a]);
        }
        for (a=0; a<5; a++) {
                printf("%c\n", str[ nums[a] ]);
        }
        return 0;
}
/*
   Expected Output:
   D
   B
   E
   B
   A
   ------------------------

   Actual Output:
   D
   B
   E
   B
   A
 */
