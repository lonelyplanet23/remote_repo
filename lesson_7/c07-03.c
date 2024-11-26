#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
char buf[BUFSIZ];
int main()
{
    //* 字符串替换
    char *p, *str = "hello";
    while(gets(buf) != NULL)
    {
        p = strstr(buf, str);
        if(p == NULL)
        {
            printf("%s", buf);
            continue;
        }
        *p = '\0';
        printf("%s_abc_%s\n", buf, p+strlen(str));
    }
    return 0;
}