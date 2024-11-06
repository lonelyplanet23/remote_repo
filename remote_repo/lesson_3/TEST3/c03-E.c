#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int main()
{
    int T;
    unsigned int a, b, c, d;
    unsigned ans = 0;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%u.%u.%u.%u", &a, &b, &c, &d);
        ans = 0;
        ans |= (a << 24);
        ans |= (b << 16);
        ans |= (c << 8);
        ans |= d;
        printf("%u\n", ans);
    }

    return 0;
}