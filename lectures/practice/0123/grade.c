#include <stdio.h>

int main()
{
        int score;
        printf("Enter your test score: ");
        scanf("%d", &score);

        char letter;
        if (score>=90)
                letter='A';
        else
        if (score>=80)
                letter='B';
        else
        if (score>=70)
                letter='C';
        else
        if (score>=60)
                letter='D';
        else
                letter='F';

        printf("Your letter grade is %c.\n", letter);

        return 0;
}
