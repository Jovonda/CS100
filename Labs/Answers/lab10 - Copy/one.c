#include <stdio.h>
#include <stdlib.h>

int ones(int num)
{
        if (num== 0) return 0;
        return num%2 + ones(num/2);
}

int main(int argc, char *argv[])
{
        int val=atoi(argv[1]);
        printf("%d in binary contains %d ones\n",
               val, ones(val));
        return 0;
}
