#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        char *word;
        word = "This will work by the grace of God";
        printf("%s\n",word );
        printf("This will work by the grace of %s\n", "God");
        /*
           So basically a pointer just stores the first character in memory, but it gets the whole string
           so
           char *word;
           word = "This will work by the grace of God";
           printf("%s\n",word );
           will print.

           Also this:
           printf("This will work by the grace of %s\n", "God");
           a pointer gets the address of the string of text and can use it for printing out the word like shown above


         */
        return 0;
}
