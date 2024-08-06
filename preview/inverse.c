#include <stdio.h>

int main(){
    int num;
    printf("Input num:\n");
    scanf("%d", &num);

/*
    for (int i = 10; 1; i *= 10)
    {
        printf("%d", (num%i) / (i/10));
        if (num / i == 0)
        {
            break;
        }
        
    }
*/
    do
    {
        printf("%d", num%10);
        num /= 10;
    } while (num > 0);

    printf("\n");
    
    return 0;
}