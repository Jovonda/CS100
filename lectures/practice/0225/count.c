#include <stdio.h>
#include <stdlib.h>

//Use wc to count the words : wc count.c
// Get rid of the const that appears with *argv[]
int main(int argc, char **argv) {

        if(argc != 2)
        {
                printf("Usage: %s filename\n",argv[0]);
                return 1;
        }

        FILE *fp = fopen(argv[1], "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", argv[1]);
                return 2;
        }

        int numChar = 0;
        int numLine = 0;
        while(1)
        {
                char ch;
                fscanf(fp, "%c", &ch);
                if(feof(fp)) break;
                numChar++;
                if(ch=='\n') numLine++;

        }
        fclose(fp);
        printf("Number of characters in %s is %d\n", argv[1], numChar);
        printf("Number of lines in %s is %d\n", argv[1], numLine);
        return 0;
}
