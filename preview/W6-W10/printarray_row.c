#include<stdio.h>

int main(){
    int array[2][3] = {
        {1, 1, 4},
        {5, 1, 4}
    };
    int row = 2;
    int col = 3;
    for (int *p = array[row - 1]; p <= array[row - 1] + col - 1 ; p++) // p<=&array[row - 1][col - 1]
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}