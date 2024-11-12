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
void bubbleSort(ll a[], int n, char ch)
{
    int flag = 0;
    loop(1, n)
    {
        flag = 0;
        for(int j = 1; j < n - i + 1; j++) //! if I write it in "j < i", then 相当于只遍历1次
        {
            if(ch == 'u')
            {
                if(a[j] > a[j+1])
                {
                    ll temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    flag = 1;
                }
            }
            if(ch == 'd')
            {
                if(a[j] < a[j+1])
                {
                    ll temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    flag = 1;
                }
            }
        }
        if(!flag) return;
    }
}
ll a[2002];
int main()
{
    int n;
    scanf("%d", &n);
    loop(1,n)
    {
        scanf("%lld", &a[i]);
    }
    bubbleSort(a, n, 'u');
    loop(1, n)
    {
        printf("%lld ", a[i]);
    }
    printf("\n");
    if(n & 1)
    {
        printf("%.1f", (double) a[(n >> 1) + 1]);
    }
    else
    {
        printf("%.1f", (double)(a[n >> 1] + a[(n >> 1) + 1])/2.0);
    }
    return 0;
}