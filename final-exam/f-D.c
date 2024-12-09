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
char str[102];
void finaljudge1(char str[])
{
    int n = strlen(str);
    switch(str[n-1])
    {
        case '=':
            printf("Left Arrow\n");
            break;
        case '<':
            printf("Not an Arrow\n");
            break;
        case '>':
            printf("Bidirectional Arrow\n");
            break;
        default:
            printf("Not an Arrow\n");
            break;
        }
        return;   
}
void isArrow(char str[])
{
    int n = strlen(str);
    if(str[0] == '<')
    {
        loop(1, strlen(str)-2)
        {
            if(str[i] != '=')
            {
                printf("Not an Arrow\n");
                return;                
            }
        }
        finaljudge1(str);
        return;
    }
    if(str[0] == '=')
    {
        loop(1, strlen(str)-2)
        {
            if(str[i] != '=')
            {
                printf("Not an Arrow\n");
                return;                
            }
        }
        if(str[n-1] == '>')
        {
            printf("Right Arrow\n");
            return;
        }
    }
    printf("Not an Arrow\n");
    return ;

}
int main()
{
    while(~scanf("%s", str))
    {
        isArrow(str);
    }
    return 0;
}