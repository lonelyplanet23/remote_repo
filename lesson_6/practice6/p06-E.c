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
int a[10][10], b[10][10];
int flag;
int check(int b[][10])
{
    int cnt[10];
    for(int i = 1; i <= 9; i++)//* check each row
    {
        memset(cnt, 0, sizeof(cnt));
        for(int j = 1; j<= 9; j++)
        {
            cnt[b[i][j]]++;
            if(cnt[b[i][j]] >= 2) return 0;
        }
        for(int j = 1; j <= 9; j++)
        {
            if(cnt[j] == 0) return 0;
        }
    }
    for(int i = 1; i <= 9; i++)//* check each column
    {
        memset(cnt, 0, sizeof(cnt));
        for(int j = 1; j<= 9; j++)
        {
            cnt[b[j][i]]++;
            if(cnt[b[j][i]] >= 2) return 0;
        }
        for(int j = 1; j <= 9; j++)
        {
            if(cnt[j] == 0) return 0;
        }
    }
    for(int i = 0; i < 9; i++)//* check each block
    {
        memset(cnt, 0, sizeof(cnt));
        //* col = (i % 3)*3 + 1 + (j % 3)
        //* row = (i / 3)*3 + 1 + (j / 3)
        for(int j = 0; j < 9; j++)
        {
            int q = b[(i / 3)*3 + 1 + (j / 3)][(i % 3)*3 + 1 + (j % 3)];
            cnt[q]++;
            if(cnt[q] >= 2) return 0;
        }
        for(int j = 1; j <= 9; j++)
        {
            if(cnt[j] == 0) return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int t = 0; t < n; t++)
    {
        for(int i = 1; i <= 9; i++)
        {
            for(int j = 1; j <= 9; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        flag = 0;
        for(int i = 1; i <= 9; i++)
        {
            for(int j = 1; j <= 9; j++)
            {
                scanf("%d", &b[i][j]);
                if(a[i][j] != 0 && a[i][j] != b[i][j])
                {
                    flag = 1;
                }
            }
        }
        if(flag)
        {
            printf("Moca is so careless!\n");
        }
        else{
            if(!check(b))
            {
                printf("Moca is so careless!\n");
            }
            else
            {
               printf("Moca finish this sudoku perfectly!\n");
            }
        }
    }
    return 0;
}