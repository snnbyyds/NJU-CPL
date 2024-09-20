#include<stdio.h>

int main(){
    int array[2][3] = {
        {1, 1, 4},
        {5, 1, 4}
    };
    int col = 1;

    int (*p)[3];

    for (p = &array[0]; p < &array[2]; p++)
    {
        printf("%d ", (*p)[col - 1]);
    }
    printf("\n");
    
    return 0;
}