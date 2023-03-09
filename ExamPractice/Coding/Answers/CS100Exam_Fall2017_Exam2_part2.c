#include <stdio.h>

int main(int argc, char const *argv[]) {
        FILE *fp;
        fp=fopen("DATA", "r");
        int number [51];
        int freq [51]= {0};
        int num = 0;
        int total = 0;
        int examNum;

        while(1)
        {
                fscanf(fp,"%d", &num);
                if(feof(fp))
                        break;

                freq[num]++;
        }
        while(1)
        {
                printf("Enter a score to check on the exam: ");
                scanf("%d", &examNum);
                if(examNum == -1)
                        break;
                for(int i = 0; i < examNum; i++)
                {
                        total += freq[i];
                }
                printf("%d scored lower than %d\n", total, examNum);
                total = 0;
        }


        return 0;
}
