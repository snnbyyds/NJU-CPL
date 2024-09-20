#include<stdio.h>

#define MAX 

void min_max(int array[], int len, int *min, int *max);

int main(){
    int array[MAX] = {1, 1, 4, 5, 1, 4};
    int len = 6, s, b;
    // int len = -1;
    // while (scanf("%d", &array[++len]) != EOF);
    min_max(array, len, &s, &b);
    printf("%d\n", s);
    printf("%d\n", b);
    return 0;
}

void min_max(int array[], int len, int *min, int *max){
    *min = array[0];
    *max = array[0];
    for (int i = 0; i < len; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
}