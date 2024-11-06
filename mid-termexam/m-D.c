#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
#define Deint(x) printf(#x"= %d\n", x)
#define Dell(x) printf(#x"= %lld\n", x)
#define Delf(x) printf(#x"= %lf\n", x)
#define Deull(x) printf(#x"= %llu\n", x)
#define Destr(x) printf(#x"= %s\n", x)
#define Deint(x) printf(#x"= %d\n", x)
#define Dechar(x) printf(#x"= %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
char words[1002], code[1002], ans[1002];
char move_upper(char ch, char mov)
{
    if(ch - 'A' >= mov)
    {
        return ch - mov;
    }
    int step = mov;
    step -= (ch - 'A');
    if(step % 26 == 0)
    {
        return 'A';
    }
    step = (step % 26) - 1;

    return 'Z' - step;
}
char move_lower(char ch, char mov)
{
    if(ch - 'a' >= mov)
    {
        return ch - mov;
    }
    int step = mov;
    step -= (ch - 'a');
    if(step % 26 == 0)
    {
        return 'a';
    }
    step = (step % 26) - 1;
    return 'z' - step;
}
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", code);
    scanf("%s", words);
    loop(0,n-1)
    {
        if(words[i] >= 'a' && words[i] <= 'z')
        {
            ans[i] = move_lower(words[i], code[i]);
        }
        else if(words[i] >= 'A' && words[i] <= 'Z')
        {
            ans[i] = move_upper(words[i], code[i]);
        }
    }
    printf("%s", ans);
    return 0;
}