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
int main()
{
    char str[10], *str1, *str2;
    
    while(~scanf("%s", str))
    {
        str1 = str;
        if((str[5]<'0' || str[5] > '9')||(str[6]<'0' || str[6] > '9')||(str[7]<'0' || str[7] > '9'))
        {
            printf("Invalid\n");
            continue;
        }
        int num = (str[5] - '0') * 100 + (str[6] - '0') * 10 + (str[7] - '0');
        if(num < 0 || num > 256)
        {
            printf("Invalid\n");
            continue;
        }
        str1[5] = '\0';
        if(strcmp(str1, "OTTER") != 0)
        {
            printf("Invalid\n");
        }
        else
        {
            printf("Valid\n");
        }

    }
    return 0;
}