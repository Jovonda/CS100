// What is the output of the C program shown
// below when the user enters the input shown
// at the right ?
//abxyba
#include <stdio.h>
#include <string.h>
int main(void) {
        char str[20];
        scanf("%s", str);
        int a = 0;
        int b = strlen(str) - 1;
        int c = 0;
        while (a <= b) {
                if (str[a] == str[b])
                        c = c + 1;
                printf("%c + %c\n", str[a], str[b]);
                a = a + 1;
                b = b - 1;
        }
        printf("%d\n", c);
        return 0;
}

/*
   Expected:
   a + a
   b + b
   x + y
   2


   ----------------------------

   Actual:
   2
   4
   40

 */
