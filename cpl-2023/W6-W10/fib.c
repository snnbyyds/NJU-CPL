#include<stdio.h>

int fib(int n){
    if (n == 1)
    {
        return 0;
    } else if (n == 2)
    {
        return 1;
    } else {
        return fib(n - 2) + fib(n - 1);
    }
}

int main(){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", fib(i));
    }
    printf("\n");
    return 0;
}