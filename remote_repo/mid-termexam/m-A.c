#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
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
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("Honesty is the first chapter in the book of wisdom.\nI promise I do not cheat in the exam.");
    }
    else if(n == 2)
    {
        printf("I promise I do not cheat in the exam.\nHonesty is the first chapter in the book of wisdom. ");
    }
    return 0;
}