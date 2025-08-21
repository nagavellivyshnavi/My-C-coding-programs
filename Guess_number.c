#include <stdio.h>

int main() {
    int number = 42;   // fixed secret number
    int guess;

    printf("Guess the number between 1 and 100: ");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too high! Try again: ");
        else if (guess < number)
            printf("Too low! Try again: ");
        else
            printf("Correct! The number was %d\n", number);

    } while (guess != number);

    return 0;
}