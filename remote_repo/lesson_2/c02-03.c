#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, r1, r2;
    scanf("%lf%lf%lf",&a, &b, &c);
    double d;
    d = (b*b) - (4 * a * c);
    if(d < 0)
    {
        printf("NULL");
    }
    else
    {
        r1 = ((-b) + sqrt(d)) / 2 * a;
        r2 = ((-b) - sqrt(d)) / 2 * a;
        if(r1 <= r2)
        {
            printf("r1 = %.2f , r2 = %.2f", r1, r2);
        }
        else
        {
            printf("r1 = %.2f , r2 = %.2f", r1, r2);
        }
    }
    return 0;
}