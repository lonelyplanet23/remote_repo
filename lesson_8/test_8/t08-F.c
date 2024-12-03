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
char cmap[51][51];
int map[51][51];
int main()
{
    int n, m;
    int k;
    scanf("%d%d", &n, &m);
    scanf("%d", &k);
    loop(0, k-1)
    {
        int x,y;
        scanf("%d%d", &x, &y);
        cmap[x][y] = '*';
        if(x - 1 > 0) map[x-1][y]++;
        if(y - 1 > 0) map[x][y-1]++;
        if(y - 1 > 0 && x - 1 > 0) map[x-1][y-1]++;
        if(x + 1 <= n) map[x+1][y]++;
        if(y + 1 <= m) map[x][y+1]++;
        if(y + 1 <= m && x + 1 <= n) map[x+1][y+1]++;     
        if(y + 1 <= m && x - 1 > 0) map[x-1][y+1]++;   
        if(y - 1 > 0 && x + 1 <= n) map[x+1][y-1]++;  
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(cmap[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                printf("%d", map[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}