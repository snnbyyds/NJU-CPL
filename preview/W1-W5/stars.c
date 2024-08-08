#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Input n:\n");
    scanf("%d", &n);

    if(n%2==0){
        n++;
    }

    //print asterisk
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= abs(i-(n+1)/2); j++){
            printf(" ");
            //printf("%d", j);
        }
        for(int j = 1; j <= -abs(2*(i-(n+1)/2))+n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}