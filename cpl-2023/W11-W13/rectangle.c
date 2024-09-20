#include<stdio.h>
#include<math.h>

struct point
{
    double x;
    double y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

double area(struct rectangle r);

int main(void){
    struct rectangle r1 = {{1.0, 2.0}, {3.0, 4.0}};
    printf("%lf\n", area(r1));
    return 0;
}

double area(struct rectangle r){
    return fabs((r.p2.x - r.p1.x) * (r.p2.y - r.p1.y));
}