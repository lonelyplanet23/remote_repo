#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
double eps = 1e-9;
char str[BUFSIZ], substr[BUFSIZ];
void rev(char *p, char *q)
{
    int temp;
    while(p < q)
    {
        temp = *q; //! 问
        *q = *p;
        *p = temp;
        p++;
        q--;
    }
}
int main()
{
    //* 逆置子字符串
    char *p = str, *q;
    scanf("%s%s", str, substr);
    p = strstr(p, substr);
    while(p != NULL)//! 注意是p不是原来字符串
    {
        q = p + strlen(substr) - 1; //!注意-1
        rev(p,q);
        p = q+1;
        p = strstr(p, substr);
    }
    puts(str);
    return 0;
}