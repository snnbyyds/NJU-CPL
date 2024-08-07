#include<stdio.h>
#include<math.h>

int main(){
    int n, num;
    scanf("%d", &n);

    int sum;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        sum = 0;
        num = i;
        do
        {
            sum += pow(num % 10, n);
            num /= 10;
        } while (num > 0);
        if (sum == i)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

    return 0;    
}