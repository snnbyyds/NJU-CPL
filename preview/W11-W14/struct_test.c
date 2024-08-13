#include<stdio.h>

int main(void){
    struct struct_test
    {
        int num;
        char str[10];
    };
    
    struct struct_test n = {.num = 114514, .str = "homo"};
    printf("%d\n", n.num);

    int i = 0;
    while (n.str[i] != '\0')
    {
        printf("%c ", n.str[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}