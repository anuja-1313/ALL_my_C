#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguesses = 1;
    number = rand()%100 + 1;// generating random number between 1 to 100
   // printf("The number is %d", number);
    do{
        printf("Guess the number between 1 to 100");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guesses the number in %d attempts\n", nguesses);
        }
        nguesses++;

    }while(guess!=number);


    return 0;
}