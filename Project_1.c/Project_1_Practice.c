#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random_number = rand() % 101;  // % 101 gives a range from 0 to 100
    int no_of_guesses = 0;
    int guessed_number ;

    // Print the generated random number
    //printf("Random number between 0 and 100: %d\n", random_number);

    do
    {
        printf("\nGuess the number = ");
        scanf("%d", &guessed_number);

        if(guessed_number > random_number)
        {
            printf("Lower number please\n");
        }
        else if(guessed_number < random_number)
        {
            printf("Hgher number please\n");
        }
        else
        {
            printf("\nCongrats!!");
        }
        no_of_guesses++;
    }while(guessed_number != random_number);

    printf("\nYou have guessed the number in %d guesses", no_of_guesses);

    return 0;
}