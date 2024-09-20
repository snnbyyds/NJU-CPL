#include<stdio.h>

// W9 1:40:00

void printarray(const int *a, int len);

int main(void){
    int array[6] = {1, 1, 4, 5, 1, 4};
    printarray(array, 6);
    return 0;
}

void printarray(const int *a, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *a++);
        //ALT, *(p + i) == p[i]
    }
    printf("\n");
}