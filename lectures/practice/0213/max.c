#include <stdio.h>

int max(int x[], int size)
{
        int m = x[0];
        //can start with 0 or 1 for i
        for(int i = 0; i < size; i++)
        {
                if(x[i]>m)
                        m = x[i];
        }
        return m;
}

int main(int argc, char const *argv[]) {
        int size;
        int x[size];
        printf("Enter a size: ");
        scanf("%d", &size);
        printf("Enter %d numbers: ", size);
        return 0;
}
