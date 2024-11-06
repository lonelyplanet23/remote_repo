#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    ll a;
    scanf("%lld", &a);
    if(a <= pow(2,31)-1 && a >= (0-pow(2,31)))
    {
        printf("Int is enough");
    }
    else{
        printf("We need long long");
    }
    return 0;
}