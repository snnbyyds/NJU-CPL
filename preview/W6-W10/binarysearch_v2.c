#include<stdio.h>

int binarysearch(const int dict[], int start, int end, int key){
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;
    if (key > dict[mid])
    {
        return binarysearch(dict, mid + 1, end, key);
    } else if (key < dict[mid])
    {
        return binarysearch(dict, start, mid - 1, key);
    } else
    {
        return mid;
    }
}

int main(){
    const int dict[10] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    printf("21 is at dict[%d]\n", binarysearch(dict, 0, 9, 21));
    return 0;
}