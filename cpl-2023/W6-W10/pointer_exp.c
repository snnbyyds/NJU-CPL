#include<stdio.h>

int main(){
    int i = 5;
    printf("%d", *&*&*&*&*&*&i);
    return 0;
}