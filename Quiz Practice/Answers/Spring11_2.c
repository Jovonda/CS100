//Give the output of the C program shown below:
#include <stdio.h>
int f(char *str, char ch) {
        if ( str[0] == '\0' )
                return 0;
        if ( str[0] == ch )
                return 1 + f(str+1, ch);
        return f(str+1, ch);
}
int main( ) {
        printf("a is %d\n", f("alabama", 'a') );
        printf("b is %d\n", f("Tide", 'z') );
        printf("c is %d\n", f("122333", '3') );
        printf("d is %d\n", f("zzzzz", 'z') );
        return 0;
}
/*
   Expected Output:
   a is 4
   b is 0
   c is 3
   d is 5
   ------------------------

   Actual Output:
   a is 4
   b is 0
   c is 3
   d is 5
 */
