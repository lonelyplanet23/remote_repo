#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
#define Deint(x) printf(#x"= %d\n", x)
#define Dell(x) printf(#x"= %lld\n", x)
#define Delf(x) printf(#x"= %lf\n", x)
#define Deull(x) printf(#x"= %llu\n", x)
#define Destr(x) printf(#x"= %s\n", x)
#define Deint(x) printf(#x"= %d\n", x)
#define Dechar(x) printf(#x"= %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
unsigned ll m;
int L[65];
void inv(int i)
{
    unsigned ll x = (1ull << i);
    m ^= x;
}
int main()
{
    int cnt = 0, k;
    scanf("%llu", &m);
    //m = 1ull << 63;
    loop(0, 63)
    {
        if((m & (1ull << i)))
        {
            L[cnt++] = i;
        }
    }
    cnt -= 1;
    for(int i = cnt; i >= 0; i--)
    {
        inv(L[i]);
        if(L[i] - 1 >= 0)
        {
            inv(L[i] - 1);
        }
        if(L[i] + 1 <= 63)
        {
            inv(L[i] + 1);
        }
    }
    cnt = 0;
    loop(0, 63)
    {
        if((m & (1ull << i)))
        {
            L[cnt++] = i;
        }
    }
    cnt -= 1;
    printf("%d\n", cnt + 1);
    for(int i = cnt; i >= 0; i--)
    {
        printf("%d ", L[i]);
    }
    return 0;
}