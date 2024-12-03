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
char str[10][1002];
char order[1001];
char ans[10000001];
int main()
{
    int n;
    scanf("%d", &n);
    char *p = ans;
    loop(1, n)
    {
        scanf("%s", str[i]);
    }
    scanf("%s", order);
    for(int i = 0; i < strlen(order); i++)
    {
        strcat(ans, str[order[i] - '0']);
    }
    p += (strlen(ans) / 2);
    printf("%s", p);
    return 0;
}