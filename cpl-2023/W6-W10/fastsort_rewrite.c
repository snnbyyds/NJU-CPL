#include<stdio.h>

void fastsort(int array[], int start, int end);
int partition(int array[], int start, int end);

void printarray(int array[], int len);

int main(){
    int array[13] = {1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0};
    fastsort(array, 0, 12);
    printarray(array, 13);
    return 0;
}

void fastsort(int array[], int start, int end){
    if (start < end)
    {
        int mid = partition(array, start, end);
        fastsort(array, start, mid - 1);
        fastsort(array, mid + 1, end);
    }
}

int partition(int array[], int start, int end){
    int pivot = array[start];
    while (start < end)
    {
        while (start < end && array[end] >= pivot)
        {
            end--;
        }
        array[start] = array[end];
        while (start < end && array[start] <= pivot)
        {
            start++;
        }
        array[end] = array[start];
    }
    array[start] = pivot;
    return end;
}

void printarray(int array[], int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}