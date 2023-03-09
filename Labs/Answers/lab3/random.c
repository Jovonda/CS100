#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {


        int num,total=0;
        // This is for numbers 0-99
        int numbers[100];
        int count[100] = {0};
        srand(0);
        printf("How many random numbers to generate:\n");
        scanf("%d", &num );
        for(int i = 0; i < 100; i++ )
        {
                numbers[i] = i;
                // printf("%d ",numbers[i]);
        }
        //printf("\n");
        // This is for the random numbers
        int random[num];
        for(int i = 0; i < num; i++)
        {
                random[i] = rand()%100;
                //printf("%d ", random[i]);
        }
        //printf("\n");

        for(int i = 0; i< num; i++)
        {

                for(int j = 0; j <100; j++ )
                {
                        if(random[i] == numbers[j])
                                count[j]++;
                        //printf("%d ", count[j]);
                }
        }
        for(int i = 0; i < 100; i++)
        {
                if(count[i] >=1)
                        total++;
        }
        printf("%d out of 100 numbers were generated after %d attempts\n", total, num);
        return 0;
}
