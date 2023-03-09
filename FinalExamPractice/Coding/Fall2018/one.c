#include <stdio.h>


int main(int argc, char *argv[])
{
        FILE *fp1, *fp2, *fp3, *fp4;
        fp1 = fopen(argv[1], "r");
        fp2 = fopen("three.dat", "w");
        fp3 = fopen("five.dat", "w");
        fp4 = fopen("both.dat", "w");
        int num = 0;
        int total = 0;
        int ttotal = 0;
        int ftotal = 0;
        int btotal = 0;
        while(1)
        {
                fscanf(fp1, "%d", &num);
                if(feof(fp1)) break;
                if(num%3 == 0 && num%5 == 0)
                {
                        fprintf(fp4, "%d ", num);
                        btotal++;
                }
                else if(num%3 == 0)
                {
                        fprintf(fp2, "%d ", num);
                        ttotal++;
                }
                else if(num%5 == 0)
                {
                        fprintf(fp3, "%d ", num);
                        ftotal++;
                }


                total++;
        }
        printf("%d out of %d integers are divisible by three only.\n", ttotal, total );
        printf("%d out of %d integers are divisible by five only.\n", ftotal, total );
        printf("%d out of %d integers are divisible by both three and five.\n", btotal, total);

        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        fclose(fp4);
        return 0;
}
