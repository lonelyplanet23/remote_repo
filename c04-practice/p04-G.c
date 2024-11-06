#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int m[1002];
int main()
{
    //!四舍五入的方法
    ll a, b;
    int c;
    scanf("%lld%lld%d", &a, &b, &c);
    ll n = a / b;
    a = a % b;
    //!模拟除法
    for(int i = 1; i <= c+1; i++)
    {
        m[i] = a * 10 / b;
        a = a * 10 % b; //* 类比长除法
    }
    if(m[c+1] >= 5)
    {
        for(int i = c; i >= 0; i--) //! 0处进给整数位
        {
            m[i]++;
            if(m[i] < 10)
            {
                break;
            }
            else
            {
                m[i] -= 10;
            }
        }
    }
    n = n + m[0];
    printf("%lld.", n);
    for(int i = 1; i <= c; i++)
    {
        printf("%d", m[i]);
    }
    return 0;
}