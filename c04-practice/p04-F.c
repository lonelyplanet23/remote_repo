#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int C[102];
int used[102];
int t[102];
int c, n, now_used = 0;
int hits(int x, int time)
{
    for(int i = 1; i <= c; i++)
    {
        if(x == C[i])
        {
            if(C[i] == 0 && used[i] == 0)
            {
                continue;
            }
            else
            {
                t[i] = time;
                return i;
            }
        }
    }
    return 0;
}
int main()
{
    
    scanf("%d%d", &c, &n);
    memset(t , 10002, sizeof(c));
    for(int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        int result = hits(num, i);
        if(result)
        {
            printf("Cache hits, the number's position is %d.\n", result);
        }
        else
        {
            if(now_used < c)
            {
                for(int j = 1; j <= c; j++)
                {
                    if(used[j] == 0)
                    {
                        C[j] = num;
                        used[j] = 1;
                        now_used++;
                        printf("Cache miss, the number's new position is %d.\n", j);
                        t[j] = i;
                        break;
                    }
                }
            }
            else if(now_used >= c)
            {
                int min = 1;
                for(int j = 2; j <= c; j++)
                {
                    if(t[j] < t[min])
                    {
                        min = j;
                    }
                }
                //替换
                C[min] = num;
                t[min] = i;
                printf("Cache miss, the number's new position is %d.\n", min);
            }
        }
    }
    return 0;
}