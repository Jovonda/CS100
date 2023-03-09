#include <stdio.h>

double findMidRange(int n, int x[], int *pNumLess, int *pNumMore)
{
        double avg;
        int countl = 0;
        int countm = 0;
        int max = x[0];
        int min = x[0];
        for (int i=0; i<n; i++)
        {
                if(x[i]>max)
                        max = x[i];
                if(x[i]<min)
                        min = x[i];
        }
        avg = (double)(min + max)/2;

        for (int i=0; i<n; i++)
        {
                if(x[i] < avg)
                {
                        // temp = x[i];
                        // if(temp > *pMaxBelow)
                        // {
                        //         *pMaxBelow = temp;
                        // }
                        countl++;

                }
                if(x[i] > avg)
                {
                        // temp = x[i];
                        // if(temp < *pMinAbove)
                        // {
                        //         *pMinAbove = temp;
                        // }
                        countm++;
                }
        }
        *pNumMore = countl;
        *pNumLess = countm;
        return avg;
}

// Do not change anything below this line
int main(void)
{
        int size;
        printf("Enter the array size: ");
        scanf("%d", &size);
        int array[size];
        printf("Enter %d integers:\n", size);
        for (int i=0; i<size; i++) {
                scanf("%d", &array[i]);
        }
        int count_less;
        int count_more;
        double midrange=findMidRange(size, array, &count_less, &count_more);
        printf("The midrange is %lf\n", midrange);
        printf("%d out of %d integers are less than the midrange\n", count_less, size);
        printf("%d out of %d integers are greater than the midrange\n", count_more, size);
        return 0;
}
