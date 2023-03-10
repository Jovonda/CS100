#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// This gets rid of the first
// int max(int x[], int size)
// {
//         if(size == 1)
//                 return x[0];
//         int m = max(x+1, size-1);
//         if(x[0] > m)
//                 return x[0];
//         else
//                 return m;
// }

//This gets rid of the last
// int max(int x[], int size)
// {
//         if(size == 1) return x[0];
//         int m= max(x, size-1);
//         if(x[size-1]>m)
//                 return x[size-1];
//         else
//                 return m;
// }

//This gets half, for sequencial programming, not really good
// int max(int x[], int size)
// {
//         if(size == 1) return x[0];
//         int m1 = max(x, size/2);
//         int m2 = max(x+size/2, size-size/2);
//         if(m1 > m2)
//                 return m1;
//         else
//                 return m2;
// }

//For subarray
int max(int x[], int first, int last)
{
        if(first == last)
                return x[first]; // x[last];

        int mid = (first+last)/2;

        int m1 = max(x, first, mid);
        int m2 = max(x, mid+1, last);
        if(m1 > m2)
                return m1;
        else
                return m2;
}
int main(int argc, char *argv[])
{
        int a[argc-1];
        for(int i = 1; i < argc; i++)
                a[i-1] = atoi(argv[i]);

        // int m =max(a, argc-1);
        int m =max(a,0,  argc-2);
        printf("The max is %d\n",m);
        return 0;
}
