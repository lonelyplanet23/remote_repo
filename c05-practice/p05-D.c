#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 10000
double eps = 1e-9;
double pi1[10001];
double pi2[10001];
void workOut()
{
    pi1[0] = 1.00;
    pi2[0] = 1.00;
    for(int i = 1; i <= N; i++)
    {
        pi1[i] = pi1[i-1] + (pow(-1,i) / (2.0 * i + 1.0));
        pi2[i] = pi2[i-1] + (1 / ((2.0 * i + 1.0)*(2.0 * i + 1.0)));
    }
    return ;
}
int main()
{
    int T, max = 0;
    scanf("%d", &T);
    workOut();
    for(int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%.6f\n", fabs(4 * pi1[n-1] - sqrt(8 * pi2[n-1])));
    }
    return 0;
}