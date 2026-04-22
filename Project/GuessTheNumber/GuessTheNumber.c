#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNumber, guessNumber, NoOfGuesses = 0;
    randomNumber = (rand() % 100) + 1;
    
    do {
        printf("Guess the number: ");
        scanf("%d", &guessNumber);
        if(guessNumber > randomNumber){
            printf("Guess lower number!\n");
        }else if(guessNumber < randomNumber){
            printf("Guess higher number!\n");
        } else{
            printf("You won!");
        }
        NoOfGuesses++;
    }while (randomNumber!=guessNumber);
    
    printf("You guess the number in %d guesses\n", NoOfGuesses);
    
    return 0;
}
