#include<stdio.h>
#include<math.h>
#define ll long long
ll a[200001], b[200001];//a是每个小球数量，bsum是每个小球数量之和
int main()
{
    ll n, k, sum = 0;
    scanf("%lld%lld", &n, &k);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum += a[i];
    }
    if(sum < k || sum % k == 0)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        return 0;
    }
    int x = sum % k;
    for(int i = 0; i < n; i++)
    {
        b[i] = sum - a[i];
    }  
    for(int i = 0; i < n; i++)
    {
        if(b[i] > x)
        {
            printf("0 ");
        }
        if(b[i] < x)
        {
            printf("%d ", x - b[i]);
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        if(a[i] < x)
        {
            printf("%d ", a[i]);
        }
        if(a[i] >= x)
        {
            printf("%d ", x);
        }
    } 
    return 0;
}