#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        if(argc != 4)
        {
                printf("Usage: %s source target\n",argv[0]);
                return 1;
        }

        FILE *fp = fopen(argv[2], "r");
        if(fp==NULL)
        {
                printf("Unable to open %s for reading\n", argv[2]);
                return 2;
        }
        if(strcmp(argv[1], "upper" )==0)
        {
                FILE *fp2 = fopen(argv[3], "w");
                if(fp2==NULL)
                {
                        printf("Unable to open %s for writing\n", argv[3]);
                        return 3;
                }
                while(1)
                {
                        char ch;
                        fscanf(fp, "%c", &ch);
                        ch = toupper(ch);
                        if(feof(fp)) break;
                        fprintf(fp2,"%c", ch );

                }
                fclose(fp2);
        }
        if(strcmp(argv[1], "lower" )==0)
        {
                FILE *fp3 = fopen(argv[3], "w");
                if(fp3==NULL)
                {
                        printf("Unable to open %s for writing\n", argv[3]);
                        return 4;
                }
                while(1)
                {
                        char ch;
                        fscanf(fp, "%c", &ch);
                        ch = tolower(ch);
                        if(feof(fp)) break;
                        fprintf(fp3,"%c", ch );

                }

                fclose(fp3);
        }
        fclose(fp);
        return 0;
}
