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
long long inv(long long a, long long p) {
    long long ans = 1, b = p - 2;
    a = (a % p + p) % p;
    for (; b; b >>= 1) {
        if (b & 1) ans = (a * ans) % p;
        a = (a * a) % p;
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    ll a, p;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a, &p);
        printf("%lld\n", inv(a, p));
    }
    return 0;
}