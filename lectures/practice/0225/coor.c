#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        // Return 0 means no problems anything other than 0 means problem
        if(argc !=2)
        {
                printf("Usager: %s num\n",argv[0]);
                return 1;
        }

        int num = atoi(argv[1]);
        for (int a=0; a<num; a++)
        {
                for (int b=0; b<num; b++)
                        printf("<%d-%d> ", a, b);
                printf("\n");
        }

        return 0;
}
