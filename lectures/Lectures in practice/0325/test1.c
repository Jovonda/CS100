#include <stdio.h>

typedef struct letter
{
        char ch;
        struct letter *next;
}Letter;

int main(int argc, char const *argv[]) {
        Letter one, two, three, four;
        one.ch = 'T';
        two.ch = 'I';
        three.ch = 'D';
        four.ch = 'E';

        //This makes each one connect to each other like a train with four equaling NULL
        one.next = &two;
        two.next = &three;
        three.next = &four;
        four.next = NULL;

        //Current location, this points to the first one
        //cur->ch prints out the current character
        Letter *cur = &one;
        while(cur != NULL)
        {
                printf("%c",cur->ch);
                cur = cur->next;
        }
        printf("\n");
        return 0;
}
