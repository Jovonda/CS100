#include <stdio.h>

int main(int argc, char const *argv[]) {
        int nums = 0;
        int sum = 0;
        printf("Enter a non-negagtive number:\n");
        scanf("%d", &nums);
        while (nums != 0)
        {
                sum = sum + nums%10;
                nums = nums / 10;
        }

        printf("Answer is %d\n", sum);
        return 0;
}
