#include <stdio.h>
#include <string.h>
int sameWhenShifted(char *s1, char * s2)
{
        int count = 0;
        char newstring[100];
        strcpy(newstring, s1);
        int length=strlen(newstring);
        while (1) {
                if(strcmp(newstring,s2)==0) break;
                char randomtemp = *newstring;
                for (int i= 0; i< length-1; i++) {
                        *(newstring+i)=*(newstring+i+1);
                }
                newstring[length-1]=randomtemp;
                count++;
                if(count == length)
                {
                        count = -1;
                        break;
                }
                printf("%s\n",newstring );
        }
        return count;
}
int main(int argc, char *argv[]) {
        char s1[100], s2[100];
        printf("Enter string 1 : ");
        scanf("%s", s1);
        printf("Enter string 2 : ");
        scanf("%s", s2);
        int ans = sameWhenShifted(s1, s2);
        if ( ans != -1 )
                printf("%s shifts %d to get %s\n", s1, ans, s2);
        else
                printf("Cannot build %s from %s\n", s2, s1);
        return 0;
}
