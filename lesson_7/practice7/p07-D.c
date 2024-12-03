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
char str[1001];
char substr[1001];
int main()
{
    int n;
    gets(str);
    scanf("%d", &n);
    getchar();
    for(int i = 1; i <= n; i++)
    {
        memset(substr, 0, sizeof(substr));
        gets(substr);
        char *p = strstr(str, substr);
        if(p == NULL)
        {
            printf("Spell Not Found!\n");
            continue;
        }
        printf("%d ", p - str);
        p = strstr(p + 1, substr);
        while(p != NULL)
        {
            printf("%d ", p - str);
            p = strstr(p + 1, substr);
        }
        printf("\n");
    }
    return 0;
}