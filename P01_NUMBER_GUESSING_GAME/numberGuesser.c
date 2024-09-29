// We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”. When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int guessed, no_of_guesses = 0;
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    printf("%d is random number\n", random_number);
    printf("Please the number between 1 to 100\n");
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        no_of_guesses++;
        if (guessed > random_number)
        {
            printf("Number is lower, guess lower number\n");
        }
        else if (guessed < random_number)
        {
            printf("Number is higher, guess higher number\n");
        }

    } while (guessed != random_number);

    printf("Congratulations! You guessed the number %d in %d attempts.\n", random_number, no_of_guesses);
    return 0;
}