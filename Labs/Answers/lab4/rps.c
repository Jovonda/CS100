#include <stdio.h>
#include <stdlib.h>
#define ROCK 0
#define PAPER 1
#define SCISSORS 2
// Print the prompt, scan in an integer, and return it.
int getInt(char prompt[])
{
        int n;
        printf("%s", prompt);
        scanf("%d", &n);
        return n;
}
// Return 0 for a tie, 1 if player 1 won, and 2 if player 2 won
int findWinner(int p1move, int p2move)
{
        int win;
        if(p1move == p2move)
                win = 0;

        else if(p1move > p2move)
                win = 1;
        else
                win = 2;
        return win;
}
// Print three results in the order of ties / player 1 wins / player 2 wins
void printResults(int numTies, int numP1Wins, int numP2Wins)
{
        printf("There were %d ties, %d player one wins, %d player two wins\n", numTies, numP1Wins, numP2Wins);
}
int main(void)
{
        int games=getInt("Enter the number of games to play: ");
        srand(0);
        int ties=0, p1wins=0, p2wins=0;
        for (int a=0; a<games; a++) {
                int p1 = rand() % 3;
                int p2 = rand() % 3;
                int ans = findWinner(p1, p2);
                if (ans == 0) ties++;
                if (ans == 1) p1wins++;
                if (ans == 2) p2wins++;
        }
        printResults(ties, p1wins, p2wins);
        return 0;
}
