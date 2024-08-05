#include<stdio.h>

int main(){
    int a,b;
    printf("input a:\n");
    scanf("%d", &a);
    printf("input b:\n");
    scanf("%d", &b);

    if(a<b){
        printf("max{a,b}=%d\n",b);
    } else {
        printf("max{a,b}=%d\n",a);
    }

    return 0;
}