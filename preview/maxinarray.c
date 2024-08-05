#include<stdio.h>

#define NUM 8
int main(){
    int array[8] = {0};

    printf("Input nums\n");
    for(int i = 0; i < NUM; i++){
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int max_loc;
    for(int i = 0; i < NUM; i++){
        if(array[i] > max){
            max_loc = i;
            max = array[i];
        }
    }

    printf("max: %d\n", max);
    printf("max_loc: %d\n", max_loc);

    return 0;
}