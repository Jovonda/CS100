#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
        int n =0;
        int p = 0;

        if(argc !=4)
        {
                printf("Usage: %s filename\n",argv[0]);
                return 1;
        }
        FILE *fp;
        fp=fopen(argv[1], "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", argv[1]);
                return 2;
        }
        FILE *fp2;
        fp2=fopen(argv[2], "r");
        if(fp2==NULL)
        {
                printf("Unable to open %s for reading\n", argv[2]);
                return 2;
        }
        FILE *fp3 = fopen(argv[3], "w");
        if(fp3==NULL)
        {
                printf("Unable to open %s for writing\n", argv[3]);
                return 3;
        }

        fscanf(fp, "%d", &n);
        fscanf(fp2, "%d", &p);
        while(1)
        {
                if(feof(fp) ||feof(fp2)) break;

                if(n < p)
                {
                        fprintf(fp3,"%d ",n );
                        fscanf(fp, "%d", &n);
                }
                else if(p < n)
                {
                        fprintf(fp3,"%d ",p);
                        fscanf(fp2, "%d", &p);
                }

                else if(p == n)
                {
                        fprintf(fp3,"%d ",p);
                        fscanf(fp, "%d", &n);
                        fscanf(fp2, "%d", &p);
                }
        }
        while(1)
        {
                if(feof(fp2)) break;
                fprintf(fp3,"%d ", p);
                fscanf(fp2, "%d", &p);

        }
        while(1)
        {
                if(feof(fp)) break;
                fprintf(fp3,"%d ", n);
                fscanf(fp, "%d", &n);

        }
        fprintf(fp3,"%s", "\n");
        fclose(fp);
        fclose(fp2);
        fclose(fp3);
        return 0;
}
