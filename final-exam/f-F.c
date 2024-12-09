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
char str[100001];
char f[27] = "ETAOINSHRDLCUMWFGYPBVKJXQZ";
int fq[30];//从0开始
char al[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// int islower(char a)
// {
//     return (a >= 'a' && a <= 'z');
// }
// int isupper(char a)
// {
//     return (a >= 'A' && a <= 'Z');
// }
int fall_cmp(const void* p1, const void* p2) //! 最标准写法
{
    char *d1 = (char *)p1;//! 空类型指针转化为具体类型
    char *d2 = (char *)p2;
    if(fq[*d1 - 'A'] > fq[*d2 - 'A']) return -1;
    if(fq[*d1 - 'A'] < fq[*d2 - 'A']) return 1;
    else return 0;
}
int main()
{
    char *s = str;
    while(gets(s) != NULL)
    {
        int n = strlen(s);
        s += n;
        *s = ';';
        s++;
    }
    s--;
    *s = '\0';
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] != ' ' && str[i] != ';')
        {
            if(islower(str[i]))
            {
                int t = str[i] - 'a';
                fq[t]++;
            }
            if(isupper(str[i]))
            {
                int t = str[i] - 'A';
                fq[t]++;
            }
        }
    }
    // for(int i = 0; i < 26; i++)
    // {
    //     printf("%d ", fq[i]);
    // }
    qsort(al, 26, sizeof(char), fall_cmp);
    for(int i = 0; i <= 25; i++)
    {
        fq[al[i] - 'A'] = i;
    }
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ';')
        {
            printf("\n");
            continue;
        }
        if(str[i] == ' ')
        {
            printf(" ");
            continue;
        }
        if(islower(str[i]))
        {
            int rank = fq[str[i] - 'a'];   
            printf("%c", 'a' + (f[rank] - 'A'));
        }
        else if(isupper(str[i]))
        {
            int rank = fq[str[i] - 'A'];
            printf("%c", 'A' + (f[rank] - 'A'));
        }        
    }
    return 0;
}