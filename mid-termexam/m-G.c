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
#define loop(l,r) for(ll i = l; i <= r; i++)
double eps = 1e-9;
ll num_cnt[11];
void count(ll a)
{
    while(a)
    {
        int num;
        num = a % 10;
        num_cnt[num] ++;
        a /= 10;
    }
}
int main()
{
    ll L, R, min_num, max = 0;
    scanf("%lld%lld", &L, &R);
    loop(L,R)
    {
        count(i);
    }
    loop(0,9)
    {
        if(num_cnt[i] > max)
        {
            min_num = i;
            max = num_cnt[i];
        }
    }
    for(int i = max; i >= 1; i--)
    {
        for(int j = 0; j <= 9; j++)
        {
            if(num_cnt[j] >= i)
            {
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    printf("- - - - - - - - - -\n");
    printf("0 1 2 3 4 5 6 7 8 9\n");
    printf("MAXNUM=%d", min_num);
    return 0;
}