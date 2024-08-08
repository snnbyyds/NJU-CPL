#include<stdio.h>

void printarray(long long array[], int len){
    for (int i = 0; i < len; i++)
    {
        printf("%lld ", array[i]);
    }
    printf("\n");
}

int main(){
    long long fib[40] = {0, 1};
    for (int i = 2; i < 40; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    printarray(fib, 40);
}