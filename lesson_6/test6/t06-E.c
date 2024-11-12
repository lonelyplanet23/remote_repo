#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
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
char route[501];
int obs[12][3];
int is_obs(int x, int y, int k)
{
    for(int i = 1; i <= k; i++)
    {
        if(x == obs[i][1] && y == obs[i][2])
        {
            return 1;
        }
    }
    return 0;
}
int mov(char r[], int l, int k, int a, int b)
{
    int x = 0, y = 0;
    loop(0, l-1)
    {
        char ch = r[i];
        switch (ch)
        {
            case 'N':
                if(!is_obs(x, y+1, k)) y++;
                break;
            case 'W':
                if(!is_obs(x-1, y, k)) x--;
                break;
            case 'S':
                if(!is_obs(x, y-1, k)) y--;
                break;
            case 'E':
                if(!is_obs(x+1, y, k)) x++;
                break;
        }
        // printf("%d : ", i);
        // Deint(x);
        // Deint(y); 
        if(x == a && y == b)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    int k, a, b;
    while(~scanf("%d%d%d", &k, &a, &b))
    {
        memset(obs, 0, sizeof(obs));
        scanf("%s", &route);
        int length = strlen(route);
        loop(1,k)
        {
            scanf("%d%d", &obs[i][1], &obs[i][2]);
        }
        if(mov(route, length, k, a, b))
        {
            printf("Otter Success\n");
        }
        else
        {
            printf("Otter Failed\n");
        }

    }
    return 0;
}