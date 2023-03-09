#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int *f(int n, char str[]) {
        int *p = malloc(sizeof(int)*n);
        int len=strlen(str);
        for (int i=0; i<n; i++) {
                p[i] = 0;
                if (i<len) {
                        if (isupper(str[i]))
                                p[i] = str[i]-'A';
                        else if (islower(str[i]))
                                p[i] = str[i]-'a';
                        else if (isdigit(str[i]))
                                p[i] = str[i]-'0';
                }
        }
        return p;
}
int g(int *x, int n) {
        int m=0;
        for (int i=0; i<n; i++)
                if (x[i]>m) m=x[i];
        return m;
}
int main(int argc, char *argv[]) {
        int n=argc-1;
        int **a=malloc(sizeof(int*)*n);
        for (int i=0; i<n; i++)
                a[i]=f(n, argv[i+1]);
        int *p = malloc(sizeof(int)*n);
        for (int i=0; i<n; i++) {
                p[i]=g(a[i], n);
                printf("%d: %d\n", i, p[i]);
        }
        printf("G: %d\n", g(p, n));
        return 0;
}
/*
   Expected:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]

   Actual:
   [2 2]
   [4 4 2 2]
   [4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3]
   [6 6 4 4 2 2 3 3 9 9]
 */
