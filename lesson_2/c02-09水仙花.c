#include<stdio.h>
int main()
{
    int x, a, b, c;
    scanf("%d", &x);
    a = x % 10;
    x /= 10;
    b = x % 10;
    x /= 10;
    c = x % 10;
    // while(x >= 10)
    //{
    //     a[i] = x % 10;
    //     x /= 10
    //     i++;
    //}
    return 0;
}