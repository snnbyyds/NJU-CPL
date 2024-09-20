#include<stdio.h>

#define LEN_a 7
#define LEN_b 10

void mergesort(int array_x[], int len_x, int array_y[], int len_y);
void printarray(int array[], int len);

int main(){
    int array_a[LEN_a] = {1, 1, 4, 12, 40, 114, 514};
    int array_b[LEN_b] = {0, 2, 3, 39, 41, 114, 117, 232, 666, 114514};

    mergesort(array_a, LEN_a, array_b, LEN_b);

    return 0;
}

void mergesort(int array_x[], int len_x, int array_y[], int len_y){
    const int len = len_x + len_y;
    int array_merged[len];

    int i = 0;
    int j = 0;
    int n = 0;

    while (i < len_x && j < len_y)
    {
        if (array_x[i] <= array_y[j])
        {
            array_merged[n++] = array_x[i++];
        } else {
            array_merged[n++] = array_y[j++];
        }
    }

    // printf("DEBUG: i=%d, j=%d, n=%d\n", i, j, n);

    if (i != len_x)
    {
        while (i < len_x)
        {
            array_merged[n++] = array_x[i++];
        }
    } else if (j != len_y)
    {
        while (j < len_y)
        {
            array_merged[n++] = array_y[j++];
        }
    }
    printarray(array_merged, len);
}

void printarray(int array[], int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}