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
char a[105];
int isNum(char ch)
{
    return (ch >= '0' && ch <= '9');
}
void numToChar(int *i)
{
    int num = 0;
    for( ; a[*i] != '\0' && a[*i] >= '0' && a[*i] <= '9'; (*i)++)
    {
        num += (a[*i] - '0');
        num *= 10;
    }
    num /= 10;
    printf("%c", num);

}
void strToNum(int *i)
{
    ll num = 0;
    for( ; a[*i] != '\0' && (!isNum(a[*i])); (*i)++)
    {
        num += (ll)a[*i];
    }
    printf("%lld", num);
}
int main()
{
    while(gets(a) != NULL)
    {

        int i = 0;
        while(a[i] != '\0')
        {
            if(isNum(a[i]))
            {
                numToChar(&i);
            }
            else if(!isNum(a[i]))
            {
                strToNum(&i);
            }
        }
        printf("\n");
        memset(a, 0, sizeof(a));
    }
    return 0;
}
