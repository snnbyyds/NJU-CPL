#include<stdio.h>
#include<stdbool.h>

bool judge(int num);

int main(){
    int num;
    scanf("%d", &num);
    if (judge(num))
    {
        printf("num is in the set!\n");
    } else
    {
        printf("num is not in the set!\n");
    }
    return 0;
}

bool judge(int num){
    int set = 0b1000010010111; //{1, 2, 3, 5, 8, 13}
    if ((set >> (num - 1)) & 1 == 1)
    {
        return true;
    } else
    {
        return false;
    }
}