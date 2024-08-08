#include<stdio.h>

int main(){
    int array[] = {1, 14, 514, 19, 1, 9, 810};

    const int len = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < len; i++)
    {
        int insert = array[i];
        int j;
        for (j = i - 1; j >= 0 && array[j] > insert; j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = insert;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}