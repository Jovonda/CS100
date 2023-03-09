#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
        //This is for strings
        // printf("%s is the best %s ever\n", "Jovonda", "programmer");

        // The default for this is to print out 6 decimal places
        //The last digtit after the 6 decimal places makes it either round up
        // or stay the same
        // printf("I ate %f corndogs last night\n", 9.1568758);

        // This will round the decimal place in the last value up
        // or make it stay the same
        printf("Pi is %f\n", 3.141592435);
        printf("Pi is %.2f\n", 3.141592435);//now only shows two decimal places
        printf("Pi is %.4f\n", 3.141592435);//now only shows 4 decimal places
        return 0;
}
