//What is the output of the C program shown below?
#include <stdio.h>
#include <string.h>
int f1(int a, int b, int c) {
        return ( (a / c) + (b % a) );
}
int f2(char str[], char ch) {
        int a = strlen(str);
        for (int z=0; z<a; z++) {
                if (str[z] == ch) return 1;
        }
        return 0;
}
int main(void) {
        printf("1 = %d\n", f1(5, 9, 2) );
        printf("2 = %d\n", f1(4, 9, 1) );
        printf("3 = %d\n", f2("Crimson", 'a' ));
        printf("4 = %d\n", f2("Alabama", 'a' ));
        return 0;
}
/*
   Expected Output:
   1 = 3
   2 = 5
   3 = 0
   4 = 3
   ------------------------

   Actual Output:

   z is 37
   10
   8
   9
   10


 */
