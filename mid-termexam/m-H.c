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
int match[22], last[22];
void copy()
{
    loop(1, 22)
    {
        last[i] = match[i];
    }
}
void print(int j, int n)
{
    printf("Round %d\n", j);
    for(int i = 1; i <= n; i += 2)
    {
        if(match[i] != 0 && match[i+1] != 0)
        {
            printf("%d-%d\n", match[i], match[i+1]);
        }
    }
}
void turn(int n)
{
    match[3] = last[2];
    match[n] = last[n-1];
    for(int i = 5; i <= n; i += 2)
    {
        match[i] = match[i-2];
    }
    for(int i = 2; i <= n - 2; i+=2)
    {
        match[i] = match[i+2];
    }
}
int main()
{
    int n, j = 1, pp = 1;
    scanf("%d", &n);
    if(n & 1)
    {
        n += 1;
        match[2] = 0;
        for(int i = 1; i <= n; i += 2)
        {
            match[i] = pp;
            pp++;
        }
        for(int i = n; i >= 4; i -= 2)
        {
            match[i] = pp;
            pp++;
        }

    }
    else
    {
        for(int i = 1; i <= n; i+=2)
        {
            match[i] = pp;
            pp++;
        }
        for(int i = n; i >= 2; i -= 2)
        {
            match[i] = pp;
            pp++;
        }
    }
    copy();
    print(1, n);
    for(int i = 2; i < n; i++)
    {
        turn(n);
        print(i , n);
        copy();
    }

    return 0;
}