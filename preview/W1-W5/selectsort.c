#include<stdio.h>

#define MAX 16

int main(){
    // Init
    int array[MAX] = {0};
    printf("input:\n");

    int len = -1;
    while (scanf("%d", &array[++len])!=EOF);

    int min, min_loc;
    for (int i = 0; i < len; i++)
    {
        min = array[i]; // Thanks DC_RedStone <1516235445@qq.com> for fix.
        for (int j = i; j < len; j++)
        {
            // Get min and its location in array[j]~array[len-1]
            //min = array[i];
            if (array[j] < min)
            {
                min_loc = j;
                min = array[j];
            }
        }

        // Swap array[min_loc] and array[i]
        array[min_loc] = array[i];
        array[i] = min;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}