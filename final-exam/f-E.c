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
int a[500002];
int bitWeight(int w)
{
    int sum = 0;
    for(int i = 31; i >= 0; i--)
    {
        sum += (i+1) * ((w >> i) & 1);
    }
    return sum;
}
int fall_cmp(const void* p1, const void* p2) //! 最标准写法
{
    int *d1 = (int *)p1;//! 空类型指针转化为具体类型
    int *d2 = (int *)p2;
    if(bitWeight(*d1) > bitWeight(*d2)) return -1;
    else if(bitWeight(*d1) < bitWeight(*d2)) return 1;
    if(*d1 > *d2) return -1;
    else if(*d1 < *d2) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    loop(0, n-1)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), fall_cmp);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}