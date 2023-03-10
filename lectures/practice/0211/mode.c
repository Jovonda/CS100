#include <stdio.h>

int main(void)
{
        int freq[11]={0};

        for (int i=0; i<6; i++) {
                int score;
                printf("Enter score #%d: ", i+1);
                scanf("%d", &score);
                freq[score]++;
        }

        int max=freq[0];
        for (int i=1; i<=10; i++) {
                if (freq[i]>max) max=freq[i];
        }

        printf("The most occuring scores include\n");
        for (int i=0; i<=10; i++) {
                if (freq[i]==max) {
                        printf("%d\n", i);
                }
        }

        return 0;
}
