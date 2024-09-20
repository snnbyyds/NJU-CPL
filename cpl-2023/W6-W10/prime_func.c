#include<stdio.h>
#include<stdbool.h>

bool prime(int num){
    int is_prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main(void){
    for (int i = 2; i <= 100; i++)
    {
        if (prime(i))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}