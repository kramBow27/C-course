#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("\n%d", &guess);
        if( guess > answer) {
            printf("Too high!");
        } else if (guess < answer) {
            printf ("Too low");
        } else {
            printf("Correct");
        }
        guesses++;
    }while(guess !=answer);

    printf("Answer: %d", answer);
    printf("guesses : %d\n", guesses);

    return 0;
}