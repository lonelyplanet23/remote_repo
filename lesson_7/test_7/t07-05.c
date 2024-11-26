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
char type[12];
char mytype[5][12] = {"int", "char", "float", "double", "long long"};
int typesize[5] = {4, 1, 4, 8, 8};
int getType(char s[])
{
    for(int i = 0; i < 5; i++)
    {
        if(strcmp(mytype[i], s) == 0)
        {
            return typesize[i];
        }
    }
    return -1;
}
int main()
{
    gets(type);
    int n, q;
    int base = 0;
    int size = getType(type);
    scanf("%d%d", &n, &q);
    // int len = base + (n * size);
    loop(1, q)
    {
        int iq;
        scanf("%d", &iq);
        if(iq >= n)
        {
            printf("Careless Otter!\n");
            continue;
        }
        printf("0x%08x\n", base + (iq * size));
    }
    return 0;
}