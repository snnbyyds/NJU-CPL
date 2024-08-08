#include<stdio.h>

int main(){
    int array[10] = {0};
    int rev_array[10] = {0};

    int LEN = -1;
    while (scanf("%d", &array[++LEN]) != EOF){
        rev_array[9 - LEN] = array[LEN];
    }

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", rev_array[i]);
    }
    printf("\n");
    
    return 0;
}