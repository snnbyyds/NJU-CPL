#include<stdio.h>

int gcd(int a, int b){
    if (b == 0)
    {
        return a;
    }
    
    return gcd(b, a % b);
}

int main(){
    printf("%d\n", gcd(24, 28));
    return 0;
}