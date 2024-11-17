#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
ll a[100001];
int comp(const void*a,const void*b)
{ 
    return *(ll*)a-*(ll*)b;
}
int main()
{
    int t, k = 0;
    ll n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
       scanf("%lld", &n);
       k = 0;
       memset(a, 0, sizeof(a));//!注意类型
       for(int j = 1; 1LL * j * j <= n; j++)
       {
           if(n % j == 0)
           {
               a[k] = j;
               k++;
               if(j != n / j)
               {
                   a[k] = n / j;
                   k++;
               }
           }
       } 
       qsort(a, k, sizeof(ll), comp);
       printf("%d\n", k);
       for(int j = 0; j < k; j++)
       {
           printf("%lld ", a[j]);
       }
       printf("\n");
    }
    return 0;
}