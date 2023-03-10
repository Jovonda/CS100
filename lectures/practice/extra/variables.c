#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
        //basics of a variable
        // x = sushi
        // I love x
        // a place holder for something else

        // variables can not start with numbers or have spaces or any symbols
        //except "_" underscore
        // do not name a variable a function, like printf, scanf, or main

        int age;
        int currentYear;
        int birthYear;
        currentYear = 2019;
        birthYear = 1994;
        age = currentYear - birthYear;
        printf("Jovonda is %d years old\n", age );
        return 0;
}
