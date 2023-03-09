// What is the output of the C program shown below
// when run with the command
// ./a.out ABC dog hike COP 13597
#include <stdio.h>
#include <string.h>
int function(char *str) {
        int len = strlen(str) - 1;
        for (int a=0; a<len; a++)
                if (str[a] > str[a+1])
                        return 1;
        return 0;
}
int main(int argc, char *argv[]) {
        for (int a=1; a<argc; a++)
                printf("%d\n", function(argv[a]) );
        return 0;
}
/*
   Expected results:
   0
   1
   1
   0
   1

   Actual results:
   0
   1
   1
   0
   1

 */
