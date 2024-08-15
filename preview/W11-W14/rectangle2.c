#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
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

double area(struct rectangle *r);
void getrectangle(struct rectangle *r, uint32_t times);

int main(void){
    int tests;
    printf("Input tests num:\n");
    scanf("%d", &tests);

    struct rectangle *p = malloc(tests * sizeof(struct rectangle));

    getrectangle(p, tests);
    
    for (uint32_t i = 0; i < tests; i++)
    {
        printf("%lf\n", area(&p[i]));
    }

    free(p);
    p = NULL;

    return 0;
}

double area(struct rectangle *r) {
    return fabs((r->p1.x - r->p2.x) * (r->p1.y - r->p2.y)); // r->p1.x == (*r).p1.x
}

void getrectangle(struct rectangle *r, uint32_t times){
    if (times > 0)
    {
        for (uint32_t i = 0; i < times; i++)
        {
            printf("Input rectangle%d:\n", i + 1);
            scanf("%lf %lf %lf %lf", &r[i].p1.x, &r[i].p1.y, &r[i].p2.x, &r[i].p2.y);
        }
    }
}