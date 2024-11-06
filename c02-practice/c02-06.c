#include<stdio.h>
#include<math.h>
#define ll long long
ll p;
ll my_pow(ll x, ll y)
{
    ll ans = 1;
    x %= p;
    while(y)
    {
        if(y & 1)
            ans = (ans * x) % p;
        x = (x * x) % p;
        y >>= 1;
    }
    return ans;
}
int main()
{
//运用取模性质：(a+b)modp=((amodp)+(bmodp))modp
// (a−b)modp=((amodp)−(bmodp))modp
// (a×b)modp=((amodp)×(bmodp))modp
    ll n, b;
    ll ans = 0;
    char ch;
    scanf("%lld%lld%lld", &n, &b, &p);
    getchar();
    for(int i = 1; i <= n; i++)
    {
        ch = getchar();
        ans += ((ch % p) *(((int)pow((double)b,(double)i-1.0) % p)));
        //printf("%d %d\n", ch%p, my_pow(b,i-1) % p);
    }
    ans %= p;
    printf("%lld", ans);
    return 0;
}