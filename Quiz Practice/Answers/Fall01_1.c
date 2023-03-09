//What is the output of the C program shown below when the user
//enters the values 2 and 4 as the program runs?
#include <stdio.h>
int main ( void ) {
        printf("Roll\nTI\nDE\n");
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        printf("%d and %d\n", x / y, y / x );
        return 0;
}
/*
   Expected Output:
   Roll
   TI
   DE
   0 and 2
   ------------------------

   Actual Output:

   Roll
   TI
   DE
   0 and 2


 */
