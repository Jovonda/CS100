#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        FILE *fp1, *fp2, *fp3;
        fp1 = fopen(argv[2], "r");
        fp2 = fopen(argv[3], "r");
        fp3 = fopen(argv[4], "r");
        int n = atoi(argv[1]);
        int num1, num2, num3;
        int num1Count = 0, num2Count = 0, num3Count =0, unknown = 0;

        for(int i = 0; i < n; i++)
        {
                fscanf(fp1, "%d", &num1);
                fscanf(fp2, "%d", &num2);
                fscanf(fp3, "%d", &num3);
                if(num1 != num2 && num1 != num3 && num2 != num1 && num2 != num3 && num3 != num1  && num3 != num2 )
                {
                        // if(num2 != num1 && num2 != num3)
                        //if(num3 != num1  && num3 != num2)
                        unknown++;
                }
                else if(num1 != num2 && num1 != num3)
                        num1Count++;
                else if(num2 != num1 && num2 != num3)
                        num2Count++;
                else if(num3 != num1 && num3 != num2)
                        num3Count++;

        }
        printf("%s has %d possible bad values\n", argv[2], num1Count);
        printf("%s has %d possible bad values\n", argv[3], num2Count);
        printf("%s has %d possible bad values\n", argv[4], num3Count);
        printf("There are %d unknown cases\n", unknown);


        return 0;
}
