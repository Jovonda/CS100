#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getInt(char *prompt);
int *getArray(int n);
double calcMean(int n, int *array);
double calcStdDev(int n, int *array, double mean);

int main(void)
{
        int size=getInt("Enter a positive integer for array size: ");
        int *array=getArray(size);

        double mean=calcMean(size, array);
        double std_dev=calcStdDev(size, array, mean);

        printf("Mean is %g\n", mean);
        printf("Standard deviation is %g\n", std_dev);

        return 0;
}

// Print out the prompt, scan in an integer and return it.
int getInt(char *prompt)
{
        printf("%s", prompt);
        int n;
        scanf("%d", &n);
        return n;
}

// Do not change anything above this line
//
// Allocate space for an array of n (n>0) integers
// Scan in n integers and store them in the array
// Return the starting address of the array
int *getArray(int n)
{
        int *x = (int *)malloc(n*sizeof(int));
        printf("Enter %d integers:\n", n);
        for (int i= 0; i < n; i++)
                scanf("%d",x + i);
        return x;

}

// Given an array of n (n>0) integers, calculate and return its mean.
double calcMean(int n, int *array)
{
        double total = 0;
        double mean;
        for(int i = 0; i < n; i++)
                total += *(array+i);
        mean = total/n;
        return mean;
}

// Given an array of n (n>0) integers, and its mean,
// Calculate and return the standard deviation.
double calcStdDev(int n, int *array, double mean)
{
        double total = 0;
        double var;
        double std;
        for(int i = 0; i < n; i++)
                total += pow((*(array + i) - mean), 2);
        var = total/n;
        std = sqrt(var);
        return std;
}
