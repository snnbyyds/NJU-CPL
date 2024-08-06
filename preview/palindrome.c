#include<stdio.h>

#define MAX 21
int main(){
    char str[MAX] = "";
    printf("input:\n");
    scanf("%20s", str);

    int len = -1;
    while (str[++len]!='\0');
    // printf("%d\n", len);
    
    int is_palindrome = 1;
    for (int i = 0, j = len - 1; j >= i; i++, j--)
    {
        if (str[i] != str[j])
        {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome == 0)
    {
        printf("not a palindrome");
    } else {
        printf("a palindrome");
    }

    return 0;
}