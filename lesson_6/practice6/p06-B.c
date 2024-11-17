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
char a[1001];
int main()
{
    scanf("%s", &a);
    //! 师傅(sifu) 年龄机制！
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == 'S')
        {
            cnt++;
            ans += cnt;
        }
        else if(a[i] == 'L')
        {
            cnt = 0;
        }
    }
    printf("%d", ans);
    return 0;
}