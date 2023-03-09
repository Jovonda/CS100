#include <stdio.h>

int main(int argc, char const *argv[]) {
        char filename[100];
        //With user, use a prompt
        printf("Enter a filename: ");
        scanf("%s",filename );
        FILE *fp;
        fp=fopen(filename, "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", filename);
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
        printf("Sum = %d, Average=%g\n", sum, (double)sum/count);

        return 0;
}
