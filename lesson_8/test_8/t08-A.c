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
    char str[2][100] = {"If one loses honesty, he will lose everything.","I promise I do not cheat in the exam."};
    char str1[100];
    scanf("%s", str1);
    if(str1[1] == 'f')
    {
        printf("%s", str[1]);
    }
    else
    {
        printf("%s", str[0]);
    }

    return 0;
}