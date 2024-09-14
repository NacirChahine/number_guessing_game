#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess, number_of_attempts = 0;
    srand(time(NULL));  // Seed the random number generator

    number_to_guess = rand() % 100 + 1;  // Generate a number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Take a guess: ");
        scanf("%d", &guess);
        number_of_attempts++;

        if (guess < number_to_guess) {
            printf("Too low!\n");
        } else if (guess > number_to_guess) {
            printf("Too high!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", number_of_attempts);
        }
    } while (guess != number_to_guess);

    return 0;
}
