#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int sum = 0;
        for(int i = 1; i <argc; i++)
        {
                //first method use sscanf changes string to number
                int n;
                sscanf(argv[i], "%d", &n);
                //second method use atoi to use have stdlib.h
                //n=atoi(argv[i]);
                // Will get same result
                sum += n;
        }

        printf("Sum = %d\n", sum);
        return 0;
}
