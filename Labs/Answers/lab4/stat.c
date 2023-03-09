#include <stdio.h>
#include <math.h>
int getInt(char prompt[])
{
        printf("%s", prompt);
        int size = 0;
        scanf("%i", &size);
        return size;
}
void getData(int array[], int size)
{
        int numbers = 0;
        for(int i = 0; i < size; i++)
        {
                scanf("%i", &numbers);
                array[i] = numbers;

        }
}
void calcMeanStdDev(int array[], int size, double *pMean, double *pStdDev)
{
        int numbers = 0;
        double total = 0;
        for(int i = 0; i < size; i++)
        {
                numbers = numbers + array[i];

        }
        total = (double)numbers/size;



        double sum = 0;
        for(int i = 0; i < size; i++)
        {
                sum += (array[i]-total)*(array[i]-total);
        }
        double variance = sum/size;
        double std_dev = sqrt(variance);

        *pMean = total;
        *pStdDev = std_dev;
}
void printResults(double mean, double std_dev)
{
        printf("The mean is %g, the standard deviation is %g\n", mean, std_dev);
}
int main(void)
{
        int size=getInt("Enter the array size: ");
        int array[size];
        getData(array, size);
        double mean, std_dev;
        calcMeanStdDev(array, size, &mean, &std_dev);
        printResults(mean, std_dev);
        return 0;
}
