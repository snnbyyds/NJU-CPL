#include<stdio.h>

int sum(int start, int end){
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    return sum;
}

int main(void){
    printf("%d\n", sum(1, 5));
    return 0;
}