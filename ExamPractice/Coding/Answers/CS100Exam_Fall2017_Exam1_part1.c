#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        char P1[10];
        char P2[10];

        printf("Player 1 move:\n");
        scanf("%s",P1);
        printf("Player 2 move:\n");
        scanf("%s",P2);

        if(strcmp(P1, P2)==0)
                printf("Game is a tie\n");

        else if(strcmp(P1, "paper")==0)
        {
                if(strcmp(P2, "rock")==0)
                        printf("Winner is Player 1\n");
                else
                        printf("Winner is Player 2\n");
        }



        else if(strcmp(P1, "rock")==0)
        {
                if(strcmp(P2, "scissors")==0)
                        printf("Winner is Player 1\n");
                else
                        printf("Winner is Player 2\n");
        }


        else if(strcmp(P1, "scissors")==0)
        {
                if(strcmp(P2, "paper")==0)
                        printf("Winner is Player 1\n");
                else
                        printf("Winner is Player 2\n");
        }

        return 0;
}
