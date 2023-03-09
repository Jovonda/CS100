#include <stdio.h>
// argc is argument count, argv is argument vector/array
//char const *argv[] can be show as char ** argv
// can not use char argv[][] Have to know how many colums in each row
// get rid of const when it is shown
// when doing this a.exe will show as just 'a'
// to copy use cp ../0220/file.c .
int main(int argc, char *argv[])
{
        for(int i =0; i <argc; i++)
        {
                printf("argv[%d]=%s\n",i,argv[i]);
        }
        return 0;
}
