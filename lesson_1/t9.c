#include<stdio.h>
int gcd(int x,int y)
{
    if (y == 0)
    {
        return x;
    }
    else return gcd(y, x % y);
}
int main()
{
    int a[9];
    for(int i = 1; i <= 8; i++)
    {
        scanf("%d",&a[i]);
    }
    int g = a[1],lcm = a[1];
    for(int i = 2; i <= 8; i++)
    {
        g = gcd(lcm,a[i]);
        lcm = (lcm/ g) * a[i];
    }
    printf("%d",lcm * 8);
    return 0;
}