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
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        printf("\\");//!输出反斜杠需要两个
        for(int j = 1; j <= 2*(n-i); j++)
        {
            printf(" ");
        }
        printf("/");
        printf("\n");
    }
    
    return 0;
}