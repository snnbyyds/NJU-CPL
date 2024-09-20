#include<stdio.h>

int main(){
    const int array1[] = {1, 1, 4, 5, 8, 65536};
    const int array2[] = {1, 2, 4, 8, 16, 32, 114514 };

    int LEN1 = sizeof(array1) / sizeof(array1[0]);
    int LEN2 = sizeof(array2) / sizeof(array2[0]);

    int LEN_merged = LEN1 + LEN2;
    int merge_array[LEN_merged];

    // Map array1 to merge_array (idx: 0 ~ LEN1 - 1)
    for (int i = 0; i < LEN1; i++)
    {
        merge_array[i] = array1[i];
    }
    
    // Map array2 to merge_array (idx: LEN1 ~ LEN1 + LEN2 - 1)
    for (int i = 0; i < LEN2; i++)
    {
        merge_array[i + LEN1] = array2[i];
    }
    
    // Kang from bubblesort.c
    for (int i = LEN_merged - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (merge_array[j] > merge_array[j + 1])
            {
                merge_array[j] += merge_array[j + 1];
                merge_array[j + 1] = merge_array[j] - merge_array[j + 1];
                merge_array[j] -= merge_array[j + 1];
            }
        }
    }
    
    for (int i = 0; i < LEN_merged; i++)
    {
        printf("%d ", merge_array[i]);
    }
    printf("\n");
    
    return 0;
}