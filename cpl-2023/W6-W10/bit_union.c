#include<stdio.h>

void set_union(int set1[], int len1, int set2[], int len2, int max);
int array2num(int array[], int len);

int main(){
    int set1[4] = {1, 4, 5, 9};
    int set2[4] = {1, 2, 4, 8};
    set_union(set1, 4, set2, 4, 9);
    return 0;
}

void set_union(int set1[], int len1, int set2[], int len2, int max){
    // array -> num
    int num1 = array2num(set1, len1);
    int num2 = array2num(set2, len2);
    
    // merge
    int num_merged = num1 | num2;

    for (int i = 0; i <= max + 1; i++)
    {
        if ((num_merged >> i) & 1 == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int array2num(int array[], int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        num = num | (1 << array[i]);
    }
    return num;
}