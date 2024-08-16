#include<stdio.h>
#include<math.h>

#define PRECISION 114514

double f(double x);
double calculus(double low, double high, double (*f)(double));

int main(void) {
    double low = 0.0;
    double high = 1.0;
    printf("%lf\n", calculus(low, high, f));
    return 0;
}

double f(double x){
    return sin(x);
}

double calculus(double low, double high, double (*f)(double)){
    double interval = (high - low) / PRECISION;
    double sum = 0.0;
    for (int i = 0; i < PRECISION; i ++)
    {
        sum += f(low + interval * i) * interval;
    }
    return sum;
}