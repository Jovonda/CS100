#include <stdio.h>
#include <math.h>
int main(void)
{
        int size;
        printf("How many dogs do you have:\n");
        scanf("%d", &size);
        int x[size];
        printf("Enter height of %d dogs:\n", size);
        for(int i = 0; i < size; i++)
        {
                scanf("%d", &x[i]);
        }
        int sum = 0;
        for(int i = 0; i < size; i++)
        {
                sum += x[i];
        }
        double mean = (double)sum/size;
        // using %g gets rid of trailing zero
        printf("mean = %g\n", mean);

        double sum2 = 0;
        for(int i = 0; i < size; i++)
        {
                sum2 += (x[i]-mean)*(x[i]-mean);
        }
        double variance = sum2/size;
        double std_dev = sqrt(variance);
        printf("Standard deviation = %g\n", std_dev);
        return 0;
}
