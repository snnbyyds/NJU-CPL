#include<stdio.h>

#define MAX 16

int main(){
    int array[MAX] = {0};

    int LEN = -1;
    printf("input 1 to 16 nums:");
    while (scanf("%d", &array[++LEN]) != EOF);
    
    // sort array[0] ~ array[LEN - 1]
    for (int i = LEN - 1; i >= 0; i--)
    {
        // perform swap operations in array[0] ~ array[i]
        // array[i + 1] ~ array[LEN - 1] are sorted
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap array[j] and array[j + 1]
                array[j] += array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] -= array[j + 1];
            }
        }
    }
    
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}