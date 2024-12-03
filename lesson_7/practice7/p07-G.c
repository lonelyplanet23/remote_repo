#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
int isNum(char ch)
{
    return (ch >= '0' && ch <= '9');
}
int isL(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int isIPv4(char str[])
{
    int ip[9];
    int cnt = 1;
    int num = 0;
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ':')
        {
            return 0;
        }//!凡是遇到i-1一定要小心
        else if((str[i] == '0' && ( i >= 1 && str[i-1] == '.') &&((i + 1) < strlen(str) && isNum(str[i+1])) || isL(str[i]) || (str[i] == '.' && (i + 1) < strlen(str) && str[i+1] == '.'))
        {
            return 0;
        }
        //* 纯手工截取数字，计入数组
        if(str[i] == '.')
        {
            ip[cnt++] = num/10;
            num = 0;
            continue;
        }
        num += (str[i] - '0');
        num *= 10;
    }
    ip[cnt++] = num/10;
    for(int i = 1; i <= 4; i++)
    {
        if(ip[i] < 0 || ip[i] > 255)
        {
            return 0;
        }
    }
    return 1;
}
int isIPv6(char str[])
{
    int cnt2 = 0;
    for(int i = 0, cnt = 0; i < strlen(str); i++)
    {
        if(str[i] == '.')
        {
            return 0;
        }
        if(str[i] == ':')
        {
            cnt = 0;
            cnt2++;
            if((i + 1) < strlen(str) && str[i+1] == ':')//* 防止连续出现两个
            {
                return 0;
            }
            continue;
        }
        cnt++;
        if(cnt >= 5)//* ：：之间的数不超过4
        {
            return 0;
        }
    }
    if(cnt2 != 7) //* 最多有7个冒号
    {
        return 0;
    }

    return 1;
}
int main()
{
    int n;
    char str[39];
    scanf("%d", &n);//! 不包含前导0， 不超过3/4位
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if(strstr(str, ".") != NULL) //* 分类判断！
        {
            if(isIPv4(str))
            {
                printf("IPv4\n");
            }
            else
            {
                printf("64vPI\n");
            }
            continue;
        }
        else if(strstr(str, ":") != NULL)
        {
            if(isIPv6(str))
            {
                printf("IPv6\n");
            }
            else
            {
                printf("64vPI\n");
            }
            continue;            
        }
        else
        {
            printf("64vPI\n");
        }
    }
    return 0;
}
