#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//!有唯一解
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
double eps = 1e-10;
double aug[101][101];
void exchangeRow(int i, int j, int n)
{
    double tmp;
    for(int k = 1; k <= n; k++)
    {
        tmp = aug[i][k];
        aug[i][k] = aug[j][k];
        aug[j][k] = tmp;
    }
}
void secondtransfTo1(int i,int j, int n)
{
    if (aug[i][j] == 0) return;
    double t = aug[i][j];
    for(int k = 1; k <= n; k++)
    {
        aug[i][k] /= t;
    }
}
void thirdtransf(int i, int j, double k, int n)
{
    for(int t = 1; t <= n; t++)
    {
        aug[j][t] -= (k * aug[i][t]); 
    } 
}
void gauss_elimination(int n)
{
    //! 前提，方程组解存在
    for(int i = 1; i <= n; i++)//! i 既可能是列，既可能也是行
    {
        //* 第一步找主元，若没有就交换
        if(fabs(aug[i][i]) < eps)//!浮点数判断为0，需要用精度判断
        {
            for(int j = i+1; j <= n; j++)
            {
                if(aug[i][j] != 0)
                {
                    exchangeRow(i, j, n+1);
                    break;
                }
            }
        }
        secondtransfTo1(i,i, n+1);
        for(int j = 1; j <= n ; j++)
        {
            if(j == i) continue;
            thirdtransf(i, j, aug[j][i], n+1);
        }
    }

}
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    for(int p = 0; p < t; p++)
    {
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n+1; j++)
            {
                scanf("%lf", &aug[i][j]);
            }
        }
        gauss_elimination(n);
        for(int i = 1; i <= n; i++)
        {
           //! printf("%d ", (int)aug[i][n+1]);//!这样是错的 丢失精度
           printf("%.0f ", aug[i][n+1]);
        }
        printf("\n");
        memset(aug, 0, sizeof(aug[0])*(n+1));
    }
    
    
    return 0;
}