#include<stdio.h>

void reversearray(int *array, int len);

int main(void){
    int array[6] = {1, 1, 4, 5, 1, 4};
    reversearray(array, 6);
    return 0;
}

void reversearray(int *array, int len){
    for (int *p = array + len - 1; p >= array; p--)
    {
        printf("%d ", *p);
    }
    
    printf("\n");
}