#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int main()
{
    double a1, a2, b1, b2, c1, c2;
    double ans;
    while(~scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2))
    {
        if((a1 == 0 && b1 == 0 && c1 == 0) || (a2 == 0 && b2 == 0 && c2 == 0))
        {
            printf("Careless little lazy otter!\n");
        }
        else
        {
            double ans;
            ans = acos(fabs(a1 * a2 + b1 * b2 + c1 * c2)/(sqrt(a1 * a1 + b1 * b1 + c1 * c1)* sqrt(a2 * a2 + b2 * b2 + c2 * c2)));
            printf("%.3f\n", ans);
        }
    }
   return 0;
}
