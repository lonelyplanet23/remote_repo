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
char str1[1001], str2[1001], str3[3003]; 
char str[3003];
int main()
{
    char *ans;
    gets(str1);
    gets(str2);
    gets(str3);
    strcat(str, str3);
    strcat(str, str2);
    strcat(str, str1);
    int len = strlen(str);
    ans = str + (len/2);
    printf("%s", ans); 
    return 0;
}