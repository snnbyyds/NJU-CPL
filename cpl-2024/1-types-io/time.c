#include<stdio.h>
#include<stdlib.h>

int main(void){
    int min1, hour1, min2, hour2;
    scanf("%d %d %d %d", &hour1, &min1, &hour2, &min2);
    int delta = abs(hour1 * 60 + min1 - hour2 * 60 - min2);
    printf("%d %d\n", delta / 60, delta % 60);
    return 0;
}