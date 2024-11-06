#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int s;
    s = a + b + c;
    if(s >= 100)
    {
        s = 100;
    }
    printf("%d", s);
}