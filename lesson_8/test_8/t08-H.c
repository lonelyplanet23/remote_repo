#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 1001
double eps = 1e-9;
char line[10][10], now[150], save[150];
int flag[10];
void dfs(int step, int n)
{
    if(step == n + 1)
    {
        if(save[0] == '\0')
        {
            strcpy(save, now);
        }
        else if(strcmp(save, now) < 0)
        {
            strcpy(save, now);
        }
        return ;
    }
    for(int i = 0; i < n; i++)
    {
        if(!flag[i])
        {
            int npos = strlen(now)-1;
            strcat(now, line[i]);
            flag[i] = 1;
            dfs(step+1, n);
            int len = strlen(line[i]);
            for(int j = npos+1; j <= npos + strlen(line[i]); j++)
            {
                now[j] = '\0';
            }
            flag[i] = 0;
        }
    }
    
}
int main()
{   
    int i = 0;
    while(~scanf("%s", line[i]))
    {
        i++;
    }
    dfs(1, i);
    printf("%s", save);
    return 0;
}