#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
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
void check(ll a)
{
    int y, clg, cls, num;
    num = a % 1000;
    a /= 1000;
    cls = a % 10;
    a /= 10;
    clg = a % 100;
    a /= 100;
    y = a;
    if((y >= 19 && y <= 24) && (clg >= 1 && clg <= 43) && (cls >= 1 && cls <= 9) && (num >= 1))
    {
        printf("Valid\n");
        return;
    }
    else
    {
        printf("Invalid\n");
        return;
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    loop(1,n)
    {
        ll a;
        scanf("%lld", &a);
        check(a);
    }
    return 0;
}