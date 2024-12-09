#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
double x[1002], y[1002];
int main()
{
    double x_avg = 0.0, y_avg = 0.0;
    int n;
    scanf("%d", &n);
    loop(1, n)
    {
        scanf("%lf", &x[i]);
        x_avg += x[i];
    }
    x_avg /= (double)n;
    loop(1, n)
    {
        scanf("%lf", &y[i]);
        y_avg += y[i];
    }
    y_avg /= (double)n;
    double sum = 0.0, times1 = 0.0, times2 = 0.0;
    for(int i = 1; i <= n; i++)
    {
        sum += (x[i] - x_avg)*(y[i] - y_avg);
        times1 += (x[i] - x_avg)*(x[i] - x_avg);
        times2 += (y[i] - y_avg)*(y[i] - y_avg);
    }
    printf("%.2f", sum / sqrt(times1 * times2));
    return 0;
}