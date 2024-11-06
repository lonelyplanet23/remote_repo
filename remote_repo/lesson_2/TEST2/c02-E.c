#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, D;
    scanf("%lf%lf%lf%lf", &A, &B, &C, &D);
    double s;
    double ans;
    double x, y, z;
    scanf(" (%lf,%lf,%lf)", &x, &y, &z);
    s = sqrt(A*A + B*B + C*C);
    ans = (A*x + B*y + C*z + D);
    if(ans < 0) ans = 0.00 - ans;
    ans = ans / s;
    printf("%.4f", ans);
    return 0;
}