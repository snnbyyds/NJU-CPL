#include<stdio.h>

#define ROW 2
#define COL 3

void printarrayrow(int *array);

int main(void){
    int array[ROW][COL] = {
        {1, 1, 4},
        {5, 1, 4}
    };
    for (int i = 0; i < ROW; i++)
    {
        printarrayrow(array[i]);
    }
    return 0;
}

void printarrayrow(int *array){
    for (int i = 0; i < COL; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}