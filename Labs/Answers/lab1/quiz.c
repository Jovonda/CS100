/*
   Made by Jovonda Robinson
   For CS100, there are 11 quizzes, but the lowest quiz score will be droped.
   The final quiz score is the average of the remaining 10 scores.
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
        int min, size = 11, total = 0;
        double avg;
        printf("Please enter 11 grades:\n");
        for (int i = 0; i < size; i++)
        {
                int n;
                scanf("%d", &n);
                if(i == 0)
                {
                        min = n;
                }
                else
                {
                        if(n < min)
                                min = n;
                }

                total = total + n;
        }
        avg = (double)(total-min)/(size-1);

        printf("The average score is %lf\n", avg );

        return 0;
}
