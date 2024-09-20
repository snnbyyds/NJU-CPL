#include<stdio.h>

union union_test
{
    double a;
    int b;
};

int main(void){
    union union_test t;
    t.a = 114514.1919;
    t.b = 810;
    printf("%lf\t%d\n", t.a, t.b);
    return 0;
}