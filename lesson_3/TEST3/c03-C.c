#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
char str[10001];
int cnt[130];
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        str[i] = getchar();
    }
    for(int i = 0; i < n; i++)
    {
        cnt[str[i]] ++;
        if(islower(str[i]))
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if(isupper(str[i]))
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    int max = 0; 
    char maxx;
    for(int i = 33; i <= 126; i++)
    {
        if(cnt[i] > max)
        {
            max = cnt[i];
            maxx = i;
        }
    }
    printf("%c\n%d", maxx, max);
    return 0;
}