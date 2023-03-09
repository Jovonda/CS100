// Give the output of the following C program when run with
// ./a.out ALABAMA ATLANTA
#include <stdio.h>
void g(char a[], int c[]) {
        for (char *ptr=a; *ptr!='\0'; ptr++)
                c[*ptr -'A']++;
}
void p(int tag, int c1[], int c2[]) {
        printf("%d: ", tag);
        for (int i=0; i<26; i++) {
                if (tag==1) {
                        if (c1[i]==0 && c2[i]>0)
                                printf("%c", 'A'+i);
                }
                else if (tag==2) {
                        if (c1[i]>0 && c2[i]==0)
                                printf("%c", 'A'+i);
                }
                else if (tag==3) {
                        if (c1[i]>0 && c2[i]>0)
                                printf("%c", 'A'+i);
                }
        }
        printf("\n");
}
int main(int argc, char *argv[]) {
        int f1[26]={0}, f2[26]={0};
        g(argv[1], f1);
        g(argv[2], f2);
        p(1, f1, f2);
        p(2, f1, f2);
        p(3, f1, f2);
        return 0;
}
/*
   Expected results:
   1: NT
   2: BM
   3: AL

   Actual results:
   1: NT
   2: BM
   3: AL
 */
