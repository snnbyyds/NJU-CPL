#include<stdio.h>
#include<stdlib.h>

#define LEN 15

#define COL LEN
#define ROW LEN

#define BLACK 1
#define BLANK 0
#define WHITE -1

int main(){
    int map[ROW][COL] = {BLANK};

    int x,y;
    int black_step = 0;
    int white_step = 0;

    int color = BLACK; // black first
    int is_win = 0;
    do
    {
        // draw a chess board (kang from @why)
        printf("  ");
        for (int i = 0; i < COL; i++)
        {
            printf("%3d", i);
        }
        printf("\n");
        for (int i = 0; i < ROW; i++)
        {
            printf("%2d", i);
            printf("\033[47;31m");
            for (int j = 0; j < COL; j++)
            {
                if (map[i][j] == BLANK)
                {
                    printf("%s", "|__");
                } else if (map[i][j] == BLACK)
                {
                    printf("| *");
                } else {
                    printf("| O");
                }
            }
            printf("|\033[0m\n");
        }
        

        // prompt b4 input
        prompt:
        color == BLACK ? printf("black's turn\n") : printf("white's turn\n");

        // player input loc
        scanf("%d %d", &y, &x);
        if (map[x][y] != 0)
        {
            printf("Illegal step!\n");
            goto prompt;
        }
        
        // change val
        if (color == BLACK)
        {
            map[x][y] = BLACK;
        } else if (color == WHITE)
        {
            map[x][y] = WHITE;
        }

        // count steps
        color == BLACK ? black_step ++ : white_step ++;
        
        // wins? (calc in 4 directions)
        for (int i = 2; i <= ROW - 3; i++)
        {
            for (int j = 2; j < COL - 3; j++)
            {
                if (map[i][j] != BLANK && 
                (abs(map[i - 2][j] + map[i - 1][j] + map[i][j] + map[i + 1][j] + map[i + 2][j])== 5 ||
                 abs(map[i - 2][j - 2] + map[i - 1][j - 1] + map[i][j] + map[i + 1][j + 1] + map[i + 2][j + 2])== 5 ||
                 abs(map[i - 2][j + 2] + map[i - 1][j + 1] + map[i][j] + map[i + 1][j - 1] + map[i + 2][j - 2])== 5 ||
                 abs(map[i][j - 2] + map[i][j - 1] + map[i][j] + map[i][j + 1] + map[i][j + 2])== 5))
                {
                    is_win = 1;
                }   
            }
        }

        // switch color
        color = -color;
    } while (is_win == 0);
    
    color = -color; // HACK
    color == BLACK ? printf("black wins\n") : printf("white wins\n");

    printf("black_step: %d, white_step: %d\n", black_step, white_step);

    return 0;
}