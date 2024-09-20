#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    // generate a random num
    int num;
    srand((unsigned int)time(NULL));
    num = rand() % 100;
    // printf("DEBUG: num = %d\n", num);
    int input;
    int chance = 7;
    while (1)
    {
        printf("[%d]input your guess:\n", chance);
        scanf("%d", &input);
        chance--;
        if (input == num)
        {
            printf("You win! chance remain: %d\n", chance);
            break;
        }
        else if (input > num)
        {
            printf("too large\n");
        }
        else
        {
            printf("too small\n");
        }
        if (chance <= 0)
        {
            printf("you lose\n");
            break;
        }
    }
    return 0;
}