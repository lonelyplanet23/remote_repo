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
int a[10088];
int b[10088];
int sum[10088];
int max(int a, int b)
{
    return (a > b)? a : b;
}
void strToArr(char str[], int len1, int len2)
{
    int len = strlen(str);
    for(int i = len1 - 1, j = 0; i >= 0; i--, j++)
    {
        a[j] = (str[i] - '0');
    }
    for(int i = len - 2, j = 0; i > len - 2 - len2; i--, j++)
    {
        b[j] = (str[i] - '0');
    }
}
int main()
{
    char str[20200];
    scanf("%s", str);
    char *p1 = strchr(str, '+');
    int len1 = p1 - str;
    int len2 = strlen(str) - len1 - 2;
    int maxlen = max(len1, len2);
    strToArr(str, len1, len2);
    for(int i = 0; i < maxlen; i++) 
    {
        sum[i] += (a[i] + b[i]);
        if(sum[i] >= 10)
        {
            sum[i+1]++;
            sum[i] -= 10;
        }
    }
    if(sum[maxlen])
    {
        printf("%d", sum[maxlen]);
    }
    for(int i = maxlen - 1; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }


    return 0;
}