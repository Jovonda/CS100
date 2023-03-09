#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        int count;
        char word[50];
        printf("Enter strings, terminating with xxx\n");
        scanf("%s", word);
        while(1)
        {
                if(strcmp(word, "xxx")==0)
                        break;
                for(int i = 0; i < strlen(word); i++)
                {
                        char temp1, temp2;
                        if(i==0)
                                temp1 = word[i];
                        if(i== strlen(word)-1)
                                temp2 = word[strlen(word)-1];
                        if(temp1 == temp2)
                                count++;
                }
                scanf("%s", word);
        }
        printf("%d have same first and last character\n",count);
        return 0;
}
