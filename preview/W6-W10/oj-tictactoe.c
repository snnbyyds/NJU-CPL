#include<stdio.h>
#include<stdbool.h>

#define BLANK 0

#define PIG_A 1
#define PIG_B 2
#define PIG_C 4

#define MAX_SIZE 10

// W8 OJ

void cleanmap(int array[MAX_SIZE][MAX_SIZE], int size);

bool judge(int map[MAX_SIZE][MAX_SIZE], int size, int pig, int win_x);

int main(void){
    int times, win_x;
    scanf("%d %d\n", &times, &win_x);

    int map[MAX_SIZE][MAX_SIZE];

    int size;
    do
    {
        times--;

        cleanmap(map, MAX_SIZE);

        scanf("%d", &size);

        for (int r = 0; r < size; r++)
        {
            for (int c = 0; c < size; c++)
            {
                scanf("%d", &map[r][c]);
            }
        }

        int sum = BLANK;

        if(judge(map, size, PIG_A, win_x)){
            sum += PIG_A;
        }
        if(judge(map, size, PIG_B, win_x)){
            sum += PIG_B;
        }
        if(judge(map, size, PIG_C, win_x)){
            sum += PIG_C;
        }

        switch (sum)
        {
        case PIG_A: case PIG_B: case PIG_C: printf("%d\n", sum); break;
        case PIG_A + PIG_B: printf("%d %d\n", PIG_A, PIG_B); break;
        case PIG_A + PIG_C: printf("%d %d\n", PIG_A, PIG_C); break;
        case PIG_B + PIG_C: printf("%d %d\n", PIG_B, PIG_C); break;
        default: printf("draw\n"); break;
        }

    } while (times > 0);

    return 0;
}

void cleanmap(int array[MAX_SIZE][MAX_SIZE], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = BLANK;
        }
    }
}

bool judge(int map[MAX_SIZE][MAX_SIZE], int size, int pig, int win_x){
    bool is_win;
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            // focus on map[r][c]
            if (c >= 0 && c <= size - win_x)
            {
                for(int i = 0; i < win_x; i++){
                    if (map[r][c + i] != pig)
                    {
                        is_win = false;
                        break;
                    }
                    else
                    {
                        is_win = true;
                    }
                }
                if (is_win == true)
                {
                    return true;
                }
            }
            if (r >= 0 && r <= size - win_x)
            {
                for(int i = 0; i < win_x; i++){
                    if (map[r + i][c] != pig)
                    {
                        is_win = false;
                        break;
                    }
                    else
                    {
                        is_win = true;
                    }
                }
                if (is_win == true)
                {
                    return true;
                }
            }
            if (r >= 0 && r <= size - win_x && r >= 0 && r <= size - win_x)
            {
                for(int i = 0; i < win_x; i++){
                    if (map[r + i][c + i] != pig)
                    {
                        is_win = false;
                        break;
                    }
                    else
                    {
                        is_win = true;
                    }
                }
                if (is_win == true)
                {
                    return true;
                }
            }
            if (r >= 0 && r <= size - win_x && r >= win_x - 1 && r <= size - 1)
            {
                for(int i = 0; i < win_x; i++){
                    if (map[r - i][c + i] != pig)
                    {
                        is_win = false;
                        break;
                    }
                    else
                    {
                        is_win = true;
                    }
                }
                if (is_win == true)
                {
                    return true;
                }
            }
        }
    }
    
    return is_win;
}