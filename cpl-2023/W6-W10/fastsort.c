#include<stdio.h>

void fastsort(int array[], int left, int right);
int partition(int array[], int left, int right);

void printarray(int array[], int len);

int main(){
    int array[13] = {1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0};
    fastsort(array, 0, 12);
    printarray(array, 13);
    return 0;
}

void fastsort(int array[], int left, int right){
    int mid;
    if (left < right)
    {
        mid = partition(array, left, right);
        fastsort(array, left, mid - 1);
        fastsort(array, mid + 1, right);
    }
}

int partition(int array[], int left, int right){
    int pivot = array[left];
    while (left < right)
    {
        while (left < right && array[right] >= pivot)
        {
            right--;
        }
        array[left] = array[right];
        while (left < right && array[left] <= pivot)
        {
            left++;
        }
        array[right] = array[left];
    }
    array[left] = pivot;
    return left;
}

void printarray(int array[], int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}