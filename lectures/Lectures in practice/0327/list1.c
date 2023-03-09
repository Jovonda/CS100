#include <stdio.h>
#include <stdlib.h>

typedef struct _letter
{
        char ch;
        struct _letter *next;
}Letter;

int main(int argc, char const *argv[]) {
        Letter *pOne, *pTwo, *pThree, *pFour;
        pOne = malloc(sizeof(Letter));
        pTwo = malloc(sizeof(Letter));
        pThree = malloc(sizeof(Letter));
        pFour = malloc(sizeof(Letter));

        pOne->ch = 'T';
        pTwo->ch = 'I';
        pThree->ch = 'D';
        pFour->ch = 'E';

        //This makes each one connect to each other like a train with four equaling NULL
        pOne->next = pTwo;
        pTwo->next = pThree;
        pThree->next = pFour;
        pFour->next = NULL;

        //Current location, this points to the first one
        //cur->ch prints out the current character
        Letter *cur = pOne;
        while(cur != NULL)
        {
                printf("%c",cur->ch);
                cur = cur->next;
        }
        printf("\n");
        free(pOne);
        free(pTwo);
        free(pThree);
        free(pFour);
        return 0;
}
