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
char map[3001][3001];
char temp[3001][3001];
void print_map(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", map[i]);
    }
    printf("\n");
}
void mymemcpy(int i, int n)
{
            for(int a = i; a <= n-i+1; a++)
            {
                temp[n-a][i-1] = map[n-a][i-1];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                temp[n-i][n-a] = map[n-i][n-a];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                temp[a-1][n-i] = map[a-1][n-i];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                temp[i-1][a-1] = map[i-1][a-1];
            }  
}
int main()
{
    //! i = 1 (1,2) - (2, )
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &map[i]);
    }
    for(int i = 1; i <= (n/2); i++)//!最后改过来
    {
        for(int t = 1; t <= (i%4); t++) //! 旋转次数
        {
            //! rotate the floor -- transpose the matrix
            mymemcpy(i, n); //!可优化
            for(int a = i; a <= n-i+1; a++)
            {
                map[i-1][a-1] = temp[n-a][i-1];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                map[n-a][i-1] = temp[n-i][n-a];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                map[n-i][n-a]= temp[a-1][n-i];
            }
            for(int a = i; a <= n-i+1; a++)
            {
                map[a-1][n-i]= temp[i-1][a-1];
            }            
        }
    }
    print_map(n);
    return 0;
}