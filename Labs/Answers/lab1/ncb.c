/*
   Made by Jovonda Robinson
   The program is to implement the ninja-cowboy-bear game that
   is similar to the rock-paper-scissors game.
   The game rules are ninja kicks/beats cowboy,
   cowboy shoots/beats bear, and bear mauls/beats ninja.
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
        char P1[10];
        char P2[10];

        printf("Please enter ninja, cowboy, or bear, Player1\n");
        scanf("%s",P1);
        printf("Please enter ninja, cowboy, or bear, Player2\n");
        scanf("%s",P2);

        if(strcmp(P1, P2)==0)
                printf("The game is a tie\n");

        else if(strcmp(P1, "ninja")==0)
        {
                if(strcmp(P2, "cowboy")==0)
                        printf("Player one wins\n");
                else
                        printf("Player two wins\n");
        }



        else if(strcmp(P1, "cowboy")==0)
        {
                if(strcmp(P2, "bear")==0)
                        printf("Player one wins\n");
                else
                        printf("Player two wins\n");
        }


        else if(strcmp(P1, "bear")==0)
        {
                if(strcmp(P2, "ninja")==0)
                        printf("Player one wins\n");
                else
                        printf("Player two wins\n");
        }

        return 0;
}
