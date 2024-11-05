#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d", &n, &k);
    if(n > k)
    {
        printf("Too many little otters!");
    }
    else 
    {
        for(int i = 1; i <= k; i++)
        {
            if(i <= n) printf("* ");
            else printf("_ ");
        }
    }
    return 0;
}