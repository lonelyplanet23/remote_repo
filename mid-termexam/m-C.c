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
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    loop(1,n)
    {
        int a,b;
        scanf("%d%d", &a, &b);
        if(a != b) 
        {
            sum++;
        }
    }
    printf("%.1f", ((double)sum /(double) n * 100.0));
    putchar(37);
    return 0;
}