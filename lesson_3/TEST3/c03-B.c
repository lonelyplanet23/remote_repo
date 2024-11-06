#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int main()
{
    int t;
    int a;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        if(a >> 24 || a < 0)
        {
            printf("We need a new cpu\n");
        }
        else
        {
            for(int i = 23; i >= 0; i--)
            {
                printf("%d", (a >> i) & 1);
            }
            printf("\n");
        }
    }
    return 0;
}