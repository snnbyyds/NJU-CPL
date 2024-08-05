#include<stdio.h>

int main(){
    int score;
    char level;
    printf("Input your score:\n");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 1: case 2: case 3: case 4: case 5:
        level = 'E';
        break;
    case 6: level = 'D'; break;
    case 7: level = 'C'; break;
    case 8: level = 'B'; break;
    case 9: case 10:
        level = 'A';
        break;

    default:
        printf("Bad input!\n");
        break;
    }

    printf("Your Score: %d\nYour level: %c\n", score, level);

    return 0;
}