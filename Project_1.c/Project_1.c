#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0 ;
    int guessed_number ;

    // printf("Random Number between 1 and 100: %d\n", randomNumber);
    
    do
    {
        printf("\nGuess the number = ");
        scanf("%d", &guessed_number);
        
        if(guessed_number > randomNumber)
        {
            printf("Lower number please\n");
        }
        else if(guessed_number < randomNumber)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("\nCongrats!!");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("\nYou have guessed the number in %d guesses", no_of_guesses);
    

    return 0;
}