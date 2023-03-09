#include <stdio.h>
#include <string.h>
// Fine
int main(int argc, char *argv[]) {
        char ch;
        while(1)
        {
                printf("Enter a character (or <control-d> to exit): ");
                scanf(" %c", &ch);
                if(feof(stdin))
                        break;
                int count = 0;
                for (int i = 1; i < argc; i++)
                {
                        for (int j = 0; j < strlen(argv[i]); j++)
                        {

                                if(argv[i][j]== ch)
                                        count++;

                        }

                }
                printf("%c occurs %d times\n",ch, count);
        }
        return 0;
}
