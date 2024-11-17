#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int main()
{
    int i, j, k, m, sign = -1;
    double n, d, s1 = 0, s2 =0, e, eps;
    scanf("%d", &m); 
    e = pow(10, -m);
    eps = e/16.0;
    for(i = 0, d = 1; d > eps; i++) 
    {
        sign = i%2 == 0 ? 1 : -1;//符号位
        k = 2*i + 1;
        for(j = 0, n = 1.0; j < k; j++)
        n *= 5;
        d = 1.0 / (k*n);
        s1 += d*sign;
    }
    eps = e/4.0;
    for(i = 0, d = 1; d > eps; i++) 
    {
        sign = i%2 == 0 ? 1 : -1;
        k = 2*i + 1;
        for(j = 0, n = 1.0; j < k; j++)
        n *= 239;
        d = 1.0 / (k*n);
        s2 += d*sign;
    }
    printf("\nPai is: %.20f\n", 16*s1- 4*s2);
    return 0;
}