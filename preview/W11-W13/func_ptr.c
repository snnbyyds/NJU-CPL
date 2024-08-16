#include<stdio.h>

int fact(int num);

int main(void){
    int (*f)(int) = fact; //fact is an addr
    printf("%d\n", f(5));
    return 0;
}

int fact(int num){
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}