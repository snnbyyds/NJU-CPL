#include<stdio.h>

int bit_fetcher(int num, int low, int high);

int main(){
    int n = 142857;
    printf("n = %d\n", n);
    bit_fetcher(142857, 17, 24);
    return 0;
}

int bit_fetcher(int num, int low, int high){
    if (low <= high && low > 0)
    {
        for (int i = high; i >= low; i--)
        {
            printf("%d", num >> (i - 1) & 1);
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Bad operation!\n");
        return 1;
    }
}