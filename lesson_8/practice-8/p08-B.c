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
int a[500001];
void isprime(int x, int n)
{
    if(x > a[n])
    {
        printf("I'm not sure!\n");
        return;
    }
    if(x == 1)
    {
        printf("It can't be a prime!\n");
        return;        
    }
    int l = 1, r = n;
    int mid;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(a[mid] > x)
        {
            r = mid-1;
        }
        else if(a[mid] < x)
        {
            l = mid+1;
        }
        else
        {
            printf("It must be %d-th prime!\n", mid);
            return;
        }
    }
    if(a[mid] == x)
    {
        printf("It must be %d-th prime!\n", mid);
        return;
    }
    printf("It can't be a prime!\n");
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int x;
        scanf("%d", &x);
        isprime(x, n);
    }
    return 0;
}