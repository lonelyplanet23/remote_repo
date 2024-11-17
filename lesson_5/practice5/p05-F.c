#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 1000001
#define mod %998244353
double eps = 1e-9;
ll arr[N];
ll a, b;
void fibo()
{   
    arr[1] = (a mod + b mod)mod;
    arr[2] = (arr[1] + a mod) mod;
    for(int i = 3; i <= N; i++)
    {
        arr[i] = (arr[i-1] mod + arr[i-2] mod) mod;
    }
}
int main()
{
    
    scanf("%lld%lld", &a, &b);
    int t, n;
    scanf("%d", &t);
    fibo();
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", arr[n]);
    }
    return 0;
}