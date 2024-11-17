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
    char ch;
    scanf("%d", &n);
    getchar();
    ll sc = 0;
    int combo = 0, now = 0, p_cnt = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%c", &ch);
        getchar();
        if(ch == 'p' || ch == 'g')
        {
            if(ch == 'p')
            {
                sc += 300;
                p_cnt++;
            }
            else if(ch == 'g')
            {
                sc += 208;
            }
            now++;
            if(combo < now) combo = now;
        }
        else if(ch == 'b')
        {
            now = 0;
            sc += 105;
        }
        else if(ch == 'm')
        {
            now = 0;
        }
    }
    printf("%lld\n", sc);
    printf("%d\n", combo);
    if(p_cnt == n)
    {
        printf("All Perfect!");
    }
    else if(combo == n)
    {
        printf("Full Combo!");
    }
    else{
        printf("Moca Complete!");
    }
    return 0;
}