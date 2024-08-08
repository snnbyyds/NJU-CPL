#include<stdio.h>

#define START 1

int main(){
    int end;

    printf("Input X and we'll calculate X! for you\n");
    scanf("%d", &end);

    int result = 1;
/*
    for(int i = START; i <= end; i++){
        result *= i;
    }
*/
    int n = end;
    for (n = n; n > 0; n --){
        result *= n;
    }
    printf("%d! = %d\n", end, result);

    return 0;
}