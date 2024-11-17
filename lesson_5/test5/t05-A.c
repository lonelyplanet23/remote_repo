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
    double x;
    double ans;
    while(scanf("%lf", &x) != EOF)
    {
        ans = sin(x) * log(fabs(x) + 1.000);
        printf("%.3f\n", ans);
    }

    return 0;
}
