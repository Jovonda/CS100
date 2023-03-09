#include <stdio.h>
int main(int argc, char const *argv[]) {
        printf("Enter a number:\n");
        int num;
        scanf("%d", &num);
        for (int a = 0; a < num; a++) {
                for (int b = 0; b <= a; b++)
                        printf("X");
                printf("\n");
        }
        return 0;
}
