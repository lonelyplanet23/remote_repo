#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
unsigned int n;
int main()
{
    int t,f,k;
    scanf("%u", &n);
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d%d", &k, &f);
        if(!f) 
        {
            n &= (~(1 << k));
            printf("%u\n", n);
        }
        else
        {
            n |= (1 << k);
            printf("%u\n", n);
        } 
    }
    printf("%u\n", n);
    return 0;
}