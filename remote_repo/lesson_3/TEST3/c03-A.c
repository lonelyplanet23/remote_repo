
#include<stdio.h>
#define len 32
int bits[len];
int main()
{
    int n,cnt = 1;
    while(~(scanf("%d", &n)))
    {
        for(int i = 31; i >= 0; i--)
        {
            printf("%d",(n >> i) & 1);
        }
        printf("\n");
    }
    
    return 0;
}