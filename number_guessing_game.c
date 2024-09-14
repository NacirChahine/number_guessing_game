#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_high_score(int high_score) {
    if (high_score == -1) {
        printf("No high score yet.\n");
    } else {
        printf("Current high score (fewest attempts): %d\n", high_score);
    }
}

int get_difficulty_level() {
    int level;
    printf("Choose difficulty level:\n");
    printf("1. Easy (1-50)\n");
    printf("2. Medium (1-100)\n");
    printf("3. Hard (1-200)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &level);
    return level;
}

int get_range(int level) {
    switch (level) {
        case 1: return 50;
        case 2: return 100;
        case 3: return 200;
        default: return 100;  // Default to medium if invalid input
    }
}

int main() {
    int guess, number, attempts, high_score = -1;
    int level, range, play_again = 1;
    srand(time(0));  // Seed the random number generator

    while (play_again) {
        level = get_difficulty_level();
        range = get_range(level);
        number = rand() % range + 1;  // Random number within chosen range
        attempts = 0;

        printf("I'm thinking of a number between 1 and %d.\n", range);

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too high! Try again.\n");
            } else if (guess < number) {
                printf("Too low! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
                if (high_score == -1 || attempts < high_score) {
                    high_score = attempts;
                    printf("New high score!\n");
                }
                break;
            }

            // Provide hints after 3 attempts
            if (attempts % 3 == 0) {
                if (guess > number) {
                    printf("Hint: The number is lower.\n");
                } else {
                    printf("Hint: The number is higher.\n");
                }
            }
        } while (1);

        print_high_score(high_score);

        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &play_again);
    }

    return 0;
}
