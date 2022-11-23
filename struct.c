#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

int main() {

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bra");
    player2.score = 5;

    printf("Player 1 name: %s\n", player1.name);
    printf("Player 1 score: %d\n\n", player1.score);
    
    printf("Player 2 name: %s\n", player2.name);
    printf("Player 2 score: %d\n", player2.score);
    return 0;
}