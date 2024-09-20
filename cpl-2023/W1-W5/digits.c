#include<stdio.h>

int main(){
    int num;
    printf("Input num:\n");
    scanf("%d", &num);

    /*
    int digits = 1;
    for (int i = 10; num / i != 0; i *= 10)
    {
        digits ++;
    }
    */

    // Kang from https://www.bilibili.com/video/BV1Re41167BF @why
    int digits = 0;
    do
    {
        num /= 10;
        digits ++;
    } while (num > 0);
    
    
    printf("digits = %d\n", digits);

    return 0;
}