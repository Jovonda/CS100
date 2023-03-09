#include <stdio.h>

int main(int argc, char const *argv[]) {
        printf("Enter intergers, ending with ctrl-d");
        int pcount;
        int ncount;
        while (1)
        {
                int num;
                scanf("%d", &num);
                if (num%5 == 0 && num > 0)
                        pcount++;
                if (num <= -1 && num >= -100)
                        ncount++;
                if(feof(stdin))
                        break;
        }
        printf("\n");
        printf("%d positive multiples of 5\n", pcount);
        printf("%d small negative values\n", ncount);

        return 0;
}
