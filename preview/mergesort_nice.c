#include<stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5, 514, 2048, 131072};
    int b[] = {1, 1, 4, 5, 1919, 16384};

    int lena = sizeof(a) / sizeof(a[0]);
    int lenb = sizeof(b) / sizeof(b[0]);

    int i,j = 0;
    while (i < lena && j < lenb)
    {
        if (a[i] <= b[j])
        {
            printf("%d ", a[i]);
            i ++;
        } else {
            printf("%d ", b[j]);
            j ++;
        }
        
    }

    if (i != lena)
    {
        while (i < lena)
        {
            printf("%d ", a[i]);
            i ++;
        }
    } else if (j != lenb)
    {
        while (j < lenb)
        {
            printf("%d ", b[j]);
            j ++;
        }
    }
    
    printf("\n");
    
    return 0;
}