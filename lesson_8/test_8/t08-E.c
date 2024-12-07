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
int isPrime(int n) 
{
    int i, step;
    if (n == 2 || n == 3 || n == 5 || n == 7) //找出前几个素数
        return 1; // 素数返回1
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return 0; // 能被任意一个素数整除（先处理前4个素数），则是合数
    else
    {
        step = 4;
        for (i = 7 + step; i * i <= n; i+= step)
        {   
    //能被任意素数整除（i=(6n+1+step)，step为4-2切换），则是合数
            if (n % i == 0)
                return 0;
            step = 6-step;
        }
    }
    return 1;
 }
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        int flag = 1;
        if(n == 1)
        {
            printf("Not otter's type!\n");
            continue;
        }
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0 && isPrime(i) && isPrime(n / i))
            {
                printf("%d %d\n", i, n / i);
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("Not otter's type!\n");
        }
    }
    return 0;
}