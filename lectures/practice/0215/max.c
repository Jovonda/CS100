#include <stdio.h>
int getInt(char prompt[])
{
        int n;
        printf("%s", prompt);
        scanf("%d", &n);
        return n;
}
void getArray(int x[], int size)
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

int findMax(int x[], int size)
{
        int m=x[0];
        for (int i=1; i<size; i++)
        {
                if (x[i]>m) m=x[i];
        }
        return m;
}

int main(void) {
        int size = getInt("What is the array size?");
        int x[size];
        int max;
        getArray(x, size);
        printArray(x,size);
        max = findMax(x, size);
        printf("Max is %d\n", max );
        return 0;
}
