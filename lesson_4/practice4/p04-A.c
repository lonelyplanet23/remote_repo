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
    int sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if(x > y) sum1++;
        else if(x < y) sum2++;
    }
    if(sum1 > sum2)
    {
        printf("Chuanyuan wins");
    }
    else if(sum1 < sum2)
    {
        printf("Shie wins");
    }
    else{
        printf("Draw");
    }
    return 0;
}