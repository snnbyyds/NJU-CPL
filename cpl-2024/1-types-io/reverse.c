#include<stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int a = num % 10;
    int b = num / 100;
    int c = (num - a - b * 100) / 10;
    printf("%d%d%d\n", a, c, b);
    return 0;
}