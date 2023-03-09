#include <stdio.h>

int main()
{
        int score;
        printf("Enter your test score: ");
        scanf("%d", &score);

        char letter;
        if (score>=90) letter='A';
        if (80<=score && score<90) letter='B';
        if (70<=score && score<80) letter='C';
        if (60<=score && score<70) letter='D';
        if (score<60) letter='F';

        printf("Your letter grade is %c.\n", letter);

        return 0;
}
