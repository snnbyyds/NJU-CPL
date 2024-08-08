#include<stdio.h>

int bubblesort(int array[], int len);

int main(){
    int len = 6;
    int array[6] = {1, 1, 4, 5, 1, 4};
    
    bubblesort(array, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

int bubblesort(int array[], int len){
    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j + 1] < array[j])
            {
                array[j + 1] += array[j];
                array[j] = array[j + 1] - array[j];
                array[j + 1] -= array[j];
            }
        }
    }
    return 0;
}