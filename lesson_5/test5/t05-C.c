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
ll arr[34];
ll a, b;
void fibo()
{   
    arr[1] = a + b;
    arr[2] = a + b + a;
    for(int i = 3; i <= 30; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
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