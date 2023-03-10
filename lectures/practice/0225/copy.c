#include <stdio.h>
#include <stdlib.h>

// Get rid of the const that appears with *argv[]
int main(int argc, char **argv) {

        if(argc != 3)
        {
                printf("Usage: %s source target\n",argv[0]);
                return 1;
        }

        FILE *fp = fopen(argv[1], "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", argv[1]);
                return 2;
        }

        FILE *fp2 = fopen(argv[2], "w");
        if(fp2==NULL)
        {
                printf("Unable to open %s for writing\n", argv[2]);
                return 3;
        }
        while(1)
        {
                char ch;
                fscanf(fp, "%c", &ch);
                if(feof(fp)) break;
                fprintf(fp2,"%c", ch );

        }
        fclose(fp);
        fclose(fp2);
        return 0;
}
