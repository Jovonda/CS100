#include <stdio.h>
// to copy use cp ../0220/data* . gets all data files/ everything
int main(int argc, char const *argv[]) {
        if(argc !=2)
        {
                printf("Usage: %s filename\n",argv[0]);
                return 100;
        }
        FILE *fp;
        fp=fopen(argv[1], "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", argv[1]);
                return 1;
        }
        int sum = 0;
        int count = 0;
        //Read, check, process
        while(1)
        {
                int n;
                //do not need to print a prompt because it is a file
                // get data from file, save it to n
                fscanf(fp, "%d", &n);
                if(feof(fp))
                        break;
                sum += n;
                count++;
        }
        fclose(fp);
        FILE *fp2;
        fp2=fopen("result.txt", "w");
        if(fp2==NULL)
        {
                printf("Unable to open %s for reading\n", "result.txt");
                return 2;
        }
        fprintf(fp2,"Sum = %d, Average=%g\n", sum, (double)sum/count);
        fclose(fp2);
        return 0;
}
