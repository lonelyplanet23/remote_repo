#include<stdio.h>
int main()
{
    int n;
    double a[102];
    double f[102];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &a[i], &f[i]);
    }
    double f1,f2;
    f1 = 0;
    f2 = 0;
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        f1 += (a[i] / (double)n);
        f2 += (a[i] * f[i]);
        sum += f[i];
    }
    f2 /= sum;
    printf("%.2f %.2f", f1, f2);

    return 0;
}