#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int main()
{
    int k;
    scanf("%d", &k);
    for(int i = 1; i <= 2*k + 1; i++)
    {
        for(int j = 1; j <= ((2 * k + 1) - i); j++)
        {
            printf(" ");
        }
        if(i == 1)
        {
            for(int j = 1; j <= 2*k-1; j++)
            {
                printf("*");
            }
            for(int j = 1; j <= (2 * k + 1) - i + 1; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= 4*k-1; j++)
            {
                printf("*");
            }        
            printf("\n");    
        }
        else if(i == k+1)
        {
            for(int j = 1; j <= 4*k-1; j++)
            {
                printf("*");
            }
            for(int j = 1; j <= (2 * k + 1) - i + 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else if(i == 2 * k + 1)
        {
            printf("*");
            for(int j = 1; j <= (2*(i - 2) + 2*k-1); j++)
            {
                printf(" ");
            }
            printf("*");
            for(int j = 1; j <= (2 * k + 1) - i + 1; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= 4*k-1; j++)
            {
                printf("*");
            }
            printf("\n");                         
        }
        else{
            printf("*");
            for(int j = 1; j <= (2*(i - 2) + 2*k-1); j++)
            {
                printf(" ");
            }
            printf("*");
            for(int j = 1; j <= (2 * k + 1) - i + 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}