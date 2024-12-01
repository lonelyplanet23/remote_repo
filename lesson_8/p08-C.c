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
#define Deu(x) printf(#x" = %u\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}
void exg(int x1, int x2, unsigned int *a)
{
    unsigned int px1 = (*a >> (unsigned int)x1) & 1U;
    unsigned int px2 = (*a >> (unsigned int)x2) & 1U;
    if(px1 != px2)
    {
        *a ^= (1U << (unsigned int)x1);
        *a ^= (1U << (unsigned int)x2);
    }
}
void change(int x, unsigned int *a)
{
    *a = *a ^ (1U << (unsigned int)x);
}
void prs(int x, unsigned int *a)
{
    *a = *a |(1U << (unsigned int)x);
}
void rels(int x, unsigned int *a)
{
    *a = *a & (~(1U << (unsigned int)x));
}
void rev(unsigned int *a, int i, int j) {
    // 确保i小于等于j
    char bits[33];
    memset(bits, 0, sizeof(bits));
    for(int t = 31; t >= 0; t--)
    {
        bits[t] = (*a >> (unsigned int)t) & 1U;
    }
    int l = i;
    int r = j;
    for(; l < r; l++, r--)
    {
        char tmp;
        tmp = bits[l];
        bits[l] = bits[r];
        bits[r] = tmp;
    }
    unsigned int a1 = 0;
    for(int t = 31; t >= 1; t--)
    {
        a1 |= bits[t];
        a1 <<= 1U;
    }
    a1 |= bits[0];
    *a = a1;
}
int main()
{
    unsigned int a;
    int T;
    scanf("%d", &T);
    for(int j = 1; j <= T; j++)
    {
        scanf("%u", &a);
        printBinary(a);
        //* 函数重载的作用，思考如何用C++/python优化！
        int t;
        scanf("%d", &t);
        for(int i = 0; i < t; i++)
        {
            int x1, x2;
            int op;
            scanf("%d", &op);
            if(op == 1)
            {
                scanf("%d%d", &x1, &x2);
                exg(x1, x2, &a);
            }
            else if(op == 2)
            {
                scanf("%d", &x1);
                change(x1, &a);
            }
            else if(op == 3)
            {
                scanf("%d", &x1);
                prs(x1, &a);
            }
            else if(op == 4)
            {
                scanf("%d", &x1);
                rels(x1, &a);
            }
            else if(op == 5)
            {
                scanf("%d%d", &x1, &x2);
                rev(&a, x1, x2);
            }
            //printBinary(a);
        }
        printf("%u\n", a);

    }
   
    return 0;
}