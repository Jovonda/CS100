#include <stdio.h>
#include <string.h>

int main(void)
{
        printf("Enter your first name: ");
        char first[20];
        scanf("%s", first);

        printf("Enter your last name: ");
        char last[20];
        scanf("%s", last);

        if (strcmp(first, "Alex")==0 && strcmp(last, "Zhang")==0) {
                printf("Hello, professor\n");
        }
        else {
                char full[strlen(first)+1+strlen(last)+1];
                strcpy(full, first);
                strcat(full, " ");
                strcat(full, last);
                int len=strlen(full);
                printf("Hello, %s, your fullname is %s and its length is %d\n", first, full, len);
        }

        return 0;
}
