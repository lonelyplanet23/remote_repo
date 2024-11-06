#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
long long n, T, l, r, ans;
//f([a,b])=f([1,b])^f([1,a-1]).
long long xor(long long a)
{
    long long ans;
    ans = a >> 2 << 2;
    for(long long i = (a>>2<<2) + 1; i <= a; i++)
    {
        ans ^= i;
    }
    return ans;
}
int main()
{
    scanf("%lld%lld", &n, &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%lld%lld", &l, &r);
        printf("%lld\n", xor(r) ^ xor(l-1));
    }
    return 0;
}