#include <stdio.h>

int main(int argc, char const *argv[]) {
        int N, T, great = 0, equal = 0, less = 0, num;

        printf("Enter the number of values to read\n");
        scanf("%d %d", &N, &T);

        for(int i = 0; i < N; i++)
        {
                scanf("%d", &num);
                if(num > T)
                        great++;
                else if(num == T)
                        equal++;
                else if(num < T)
                        less++;
        }
        printf("Saw %d values greater than %d\n", great, T);
        printf("Saw %d values equal than %d\n", equal, T);
        printf("Saw %d values less than %d\n", less, T);

        return 0;
}
