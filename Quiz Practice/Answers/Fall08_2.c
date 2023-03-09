//Give the output of the C program shown below:
#include <stdio.h>
#include <stdlib.h>
void function(char *str, char ch, int len) {
        for (int a=0; a<len; a++) {
                str[a] = ch;
                ch = ch + 1;
        }
        str[len] = '\0';
        return;
}
int main(void) {
        char *s1 = malloc ( sizeof(char) * 3 );
        function(s1, 'x', 2);
        printf("%s\n", s1);
        char *s2 = malloc ( sizeof(char) * 5 );
        function(s2, 'A', 4);
        printf("%s\n", s2);
        return 0;
}
/*
   Expected Output:
   xy
   ABCD
   ------------------------

   Actual Output:

   xy
   ABCD


 */
