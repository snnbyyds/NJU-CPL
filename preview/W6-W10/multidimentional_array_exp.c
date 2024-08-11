#include<stdio.h>

int main(void){
    int array[2][3] = {
        {1, 1, 4},
        {5, 1, 4}
    };
    for (int *p = &array[0][0]; p <= &array[1][2]; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}