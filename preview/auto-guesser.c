#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(){
    int num, score;
    int guess;
    int max = INT_MAX;
    int min = INT_MIN;
    
    printf("min: %d , max %d \n", min, max);

    printf("Use a random number for fun? Input 0/1:\n");
    int is_random;
    scanf("%d", &is_random);

    switch (is_random)
    {
    case 1:
        srand(time(NULL));
        num = rand() % 1000000;
        printf("Generated number: %d\n", num);
        break;
    case 0:
        printf("Input your number(INT_MIN+1~INT_MAX-1):\n");
        scanf("%d", &num);
        break;
    default:
        printf("Bad Input!\n");
        break;
    }

    int tries = 0;

    while(1){
        guess = (min + max) / 2;
        printf("Guess: %d\n", guess);

        if(guess == num){
            printf("The number is %d!\n", guess);
            break;
        } else if(guess > num) {
            max = guess - 1; // Refresh max if we guess a larger number
        } else {
            min = guess + 1; // Refresh min if we guess a smaller number
        }
        
    printf("min: %d , max %d \n", min, max);
    tries ++;
    }

    score = tries * 25;
    printf("The system tried %d times!\n", tries);
    printf("Your Score: %d\n", score);

    return 0;
}