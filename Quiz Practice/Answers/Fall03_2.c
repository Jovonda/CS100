// What is the output of the C program shown below when the user
// enters the following data as input?
//University Alabama
#include <stdio.h>
#include <string.h>
int main(void) {
        int a, b;
        char s1[20], s2[20];
        scanf("%s %s", s1, s2);
        b = strlen(s1);
        for (a=0; a<b; a=a+2)
                printf("%c", s1[a]);
        printf("\n");
        a = strlen(s2)-1;
        while (s2[a] != 'b') {
                printf("%c\n", s2[a]);
                a = a - 1;
        }
        return 0;
}
/*
   Expected Output:
   Uiest
   a
   m
   a

   ------------------------
   Actual Output:
   Uiest
   a
   m
   a


 */
