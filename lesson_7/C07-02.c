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
int mylen(char *str)
{
    char *str2 = str;
    while(*str2 != '\0')
    {
        str2++;
    }
    return str2 - str;
}
char s[1001];
int main()
{
    gets(s);
    printf("%d", mylen(s));
    return 0;
}