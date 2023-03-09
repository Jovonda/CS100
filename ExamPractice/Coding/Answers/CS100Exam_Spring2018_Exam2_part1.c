#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
        FILE *fp1, *fp2;
        fp1 = fopen("good", "w");
        fp2 = fopen("bad", "w");
        int num1, num2, temp;
        printf("Enter your data: \n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        fprintf(fp1, "%d\n", num1);
        while(1)
        {
                if(feof(stdin)) break;
                if(num2 > num1)
                {
                        fprintf(fp1, "%d\n", num2);
                        num1 = num2;
                        //scanf("%d", &num2);

                }
                else
                {
                        fprintf(fp2, "%d\n", num2);
                        num1 = num2;
                }
                scanf("%d", &num2);

        }

        return 0;
}
