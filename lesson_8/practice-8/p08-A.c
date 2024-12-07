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
int isdif(char str[], int n)
{
    int ch = (int)str[0];
    for(int i = 1; i < n; i++)
    {
        ch ^= (int)str[i];
    }
    if(ch == str[0] && ch == str[n-1])
    {
        ch = 0;
    }
    return ch; 
}
int main()
{
    int n;
    int ch;
    char str[101];
    char *ptr = str;
    while(~scanf("%s", str))
    {
        n = strlen(str);
        if(n & 1)
        {
            ch = isdif(str, n);
        }
        else
        {
            ch = isdif(str, n-1);
            if(ch == 0 && str[n-2] != str[n-1])
            {
                ch = str[n-1];
            }
        }
        if(ch == 0)
        {
            printf("All characters are the same\n");
        }
        else
        {
            printf("%d\n", strchr(str, (char)ch) - str + 1);
        }
    }

    return 0;
}