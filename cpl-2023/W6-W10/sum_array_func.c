#include<stdio.h>

int sum_array(const int array[], int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main(){
    int array[6] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", sum_array(array, 6));

    return 0;
}