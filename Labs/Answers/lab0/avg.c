#include <stdio.h>

int main(int argc, char const *argv[]) {
        int num = 0;
        int x = 0;
        int total;
        double average;
        printf("Enter four integers\n");
        //scanf("%d", &num);

        while(x != 4)
        {
                scanf("%d", &num);
                total = total + num;
                x++;

        }
        printf("%d\n", total);
        average = total/ 4.0;
        printf("average is %lf\n",average );
        return 0;
}
