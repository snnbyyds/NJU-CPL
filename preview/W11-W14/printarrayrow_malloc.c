#include<stdio.h>
#include<stdlib.h>

#define ROW 2
#define COL 3

void printarrayrow(int array[]);

int main(void){
    int (*p)[COL] = malloc(ROW * COL * sizeof(int));
    for (int *i = &p[0][0]; i <= &p[ROW - 1][COL - 1]; i++)
    {
        *i = 11451419;
    }
    
    for (int i = 0; i < ROW; i++)
    {
        printarrayrow(p[i]);
    }

    free(p);
    p = NULL;
    return 0;
}

void printarrayrow(int array[]){
    for (int i = 0; i < COL; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}