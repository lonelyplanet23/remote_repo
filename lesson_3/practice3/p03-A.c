#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
char str[33];
int main()
{
    //!每次读入一个整数的方法：%1d
    int num = 0;
    while(~scanf("%s", str))
    {
        num = 0;
        for(int i = 31; i >= 0; i--)
        {
            num |= ((str[i] - '0') << (31-i));
        }
        printf("%d\n", num);
    }
    return 0;
}