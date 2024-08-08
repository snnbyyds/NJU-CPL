#include<stdio.h>
#define LEN 10

const int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int main(){
    int num;
    scanf("%d", &num);
    int start = 0;
    int end = LEN - 1;

    int key,key_loc;
    while (start <= end)
    // not using while (1) here so that nothing won't be printed if the number doesn't exist
    {
        key_loc = (start + end) / 2;
        // printf("loc is %d?\n", key_loc);
        key = dict[key_loc];
        if (key == num)
        {
            printf("%d is dict[%d]\n", num, key_loc);
            break;
        } else if (key > num)
        {
            end = key_loc - 1;   // Without -1 or +1,
        } else {                 // dict[LEN - 1] can
            start = key_loc + 1; // never be found.
        }                        // REF: W4, https://www.bilibili.com/video/BV1Re41167BF
    }
    
    return 0;
}