#include <stdio.h>

double average(int n, int x[], int *pMaxBelow, int *pMinAbove)
{
        double total;
        double sum;
        int temp = 0;
        *pMaxBelow = 0;
        *pMinAbove = 100;
        for (int i=0; i<n; i++)
        {
                total= total + x[i];
        }
        sum = total/(double)n;

        for (int i=0; i<n; i++)
        {
                if(x[i] < sum)
                {
                        temp = x[i];
                        if(temp > *pMaxBelow)
                        {
                                *pMaxBelow = temp;
                        }

                }
                if(x[i] > sum)
                {
                        temp = x[i];
                        if(temp < *pMinAbove)
                        {
                                *pMinAbove = temp;
                        }
                }
        }

        return sum;
}

// Do not change anything below this line
int main(void)
{
        int size;
        printf("How many integers? ");
        scanf("%d", &size);
        int array[size];
        printf("Enter %d unique integers (0 through 100):\n", size);
        for (int i=0; i<size; i++) {
                scanf("%d", &array[i]);
        }
        int max_below;
        int min_above;
        double avg=average(size, array, &max_below, &min_above);
        printf("The average is %g\n", avg);
        printf("The largest below the average is %d\n", max_below);
        printf("The smallest above the average is %d\n", min_above);
        return 0;
}
