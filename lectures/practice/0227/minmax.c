#include <stdio.h>
int getInt(char prompt[])
{
        int n;
        printf("%s", prompt);
        scanf("%d", &n);
        return n;
}
//array name is pointer to address
//array is an address
void getArray(int *x, int size)
{

        for (int i= 0; i < size; i++)
        {
                printf("Enter integer #%d: ", i+1);
                scanf("%d",&x[i]);
        }

}

void printArray(int x[], int size)
{
        printf("[ ");
        for (int i= 0; i < size; i++)
                printf("%d ", x[i]);
        printf("]\n");
}
//min, max is the same as *pMin and *pMax
void findMinMax(int x[], int size, int *pMin, int *pMax)
{
        int min=x[0];
        int max=x[0];
        for (int i=1; i<size; i++)
        {
                if (x[i]>max) max=x[i];
                if (x[i]<min) min=x[i];
        }
        printf("In findMinMax, min=%d, max=%d\n", min, max);
        //*pMin is same as &min
        // the *pMin is address and returns the value
        *pMin = min;
        *pMax = max;
        //Don't need return because it is void
        //return;
}
// array can be both input and output becase array is an address
void findMinMax2(int x[], int size, int extreme[])
{
        int min=x[0];
        int max=x[0];
        for (int i=1; i<size; i++)
        {
                if (x[i]>max) max=x[i];
                if (x[i]<min) min=x[i];
        }
        printf("In findMinMax, min=%d, max=%d\n", min, max);

        extreme[0] = min;
        extreme[1] = max;
        //Don't need return because it is void
        //return;
}
void swap(int *pFirst, int *pSecond)
{
        // *& cancel each other out and just gives number
        int temp = *pFirst;
        *pFirst = *pSecond;
        *pSecond = temp;
}
void reverseArray(int x[], int size)
{
        // This is very new
        // a + b == a + size -1
        for(int a = 0, b = size -1; a < b; a++, b--)
        {
                swap(&x[a], &x[b]);
                // int temp = x[a];
                // x[a]=x[b];
                // x[b]=temp;
        }
}
int main(void) {
        int size = getInt("What is the array size?");
        int x[size];
        int min = 1000, max = -1000;
        getArray(x, size);
        printArray(x,size);

        printf("Min is %d, Max is %d\n", min, max );
        findMinMax(x, size, &min, &max);
        printf("Min is %d, Max is %d\n", min, max );

        int ex[2];
        findMinMax2(x, size, ex);
        printf("Min is %d, Max is %d\n", ex[0], ex[1]);

        reverseArray(x, size);
        printArray(x,size);
        return 0;
}
