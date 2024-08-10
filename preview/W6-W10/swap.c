#include<stdio.h>

void swap(int *aptr, int *bptr);

int main(){
    int a = 114;
    int b = 514;
    swap(&a, &b);
    printf("a=%d\tb=%d\n", a, b);
    return 0;
}

void swap(int *aptr, int *bptr){
    int tmp = *aptr;
    *aptr = *bptr;
    *bptr = tmp;
}