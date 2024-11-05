#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int gcd = a;
    if(b < a) gcd = b;
    
    while(!((a % gcd == 0)&&(b % gcd == 0)))
    {
        gcd--;
    }
    printf("%d",gcd);
    return 0;
}