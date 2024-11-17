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
ll p[42];
int isPrime(ll n) 
{
    ll i, step;
    if (n == 2LL || n == 3LL || n == 5LL || n == 7LL) //找出前几个素数
        return 1; // 素数返回1
    else if (n % 2LL == 0 || n % 3LL == 0 || n % 5LL == 0 || n % 7LL == 0)
        return 0; // 能被任意一个素数整除（先处理前4个素数），则是合数
    else
    {
        step = 4LL;
        for (i = 7LL + step; i * i <= n; i+= step)
        {   
    //能被任意素数整除（i=(6n+1+step)，step为4-2切换），则是合数
            if (n % i == 0)
                return 0;
            step = 6LL-step;
        }
    }
    return 1;
 }

int main()
{
    int n;
    ll ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &p[i]);
        if(isPrime(p[i]))
        {
            printf("Yes\n");
            ans += (1LL << i);
            //printf("ans += %lld, ans = %lld\n", (1<<i), ans);
        }
        else
        {
            printf("No\n");
        }
    }
    printf("%lld\n", ans);
    if(isPrime(ans))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}