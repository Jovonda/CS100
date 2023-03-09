#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int max = atoi(argv[1]);
        int min = atoi(argv[1]);
        int range = 0;
        for(int i = 1; i < argc; i++)
        {
                if(atoi(argv[i]) > max)
                        max = atoi(argv[i]);

                if(atoi(argv[i]) < min)
                        min = atoi(argv[i]);
        }
        range = max - min;
        printf("The range of these %d integers is %d\n", argc-1, range );
        return 0;
}
