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
int cmp(const void* p1, const void* p2)
{
    int *a1 = (int *)p1;
    int *a2 = (int *)p2;
    if(*a1 < *a2)
    {
        return -1;
    }
    else if(*a1 > *a2)
    {
        return 1;
    }
    return 0;
}
ll a[300001];
ll copy[300001];
ll acopy[300001];
int find(ll x, int a, int b)
{
    int l = a, r = b;
    int mid;
    while(l <= r)
    {
        mid = (l+r) / 2;
        if(copy[mid] < x)
        {
            l = mid + 1;
        }
        else if(copy[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    if(copy[mid] == x)
    {
        return mid;
    }
    else return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    memcpy(acopy, a, sizeof(a));
    qsort(a+1, n, sizeof(ll), cmp);//! 易错
    copy[1] = a[1];
    int j = 2;
    for(int i = 2; i <= n; i++)
    {
        if(a[i] != copy[j-1])
        {
            copy[j] = a[i];
            j++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", find(acopy[i], 1, j-1));
    }
    return 0;
}