#include <stdio.h>

int main(int argc, char const *argv[]) {
        int total = 0;
        int number;
        int count;
        printf("Enter a nunmber\n");
        scanf("%d", &number);
        printf("My number is %d\n", number);
        while(number != 0)
        {
                printf("My new number is %d\n", number);
                total += number%10;
                printf("My total is %d\n",total);
                number= number/10;
                count++;
        }
        printf("This %d  is my number after dividing by 10 %d times \n", number, count);
        //printf("%d\n", total);
        return 0;
}
