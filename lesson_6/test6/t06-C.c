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
char str[100002];
void str_rev(char s[])
{
    int r = 0, l = 0;
    char temp;
    while(s[r] != '\0') //* 找到字符串长度 
    {
        r++;
    }
    r--;                //*排掉'\0'
    for(; r > l; r--, l++) //*一前一后对称交换
    {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
    }
}
int my_cmp(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] == s2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", str);
        int length = strlen(str);
        char tmp[100002];
        strcpy(tmp, str);
        str_rev(str);
        if(length & 1)
        {
            if(!strcmp(str, tmp))
            {
                printf("Wingardium Leviosa\n");
            }
            else
            {
                printf("The spell fails\n");
            }
        }
        else
        {
            if(my_cmp(str, tmp))
            {
                printf("Wingardium Leviosa\n");
            }
            else{
                printf("The spell fails\n");
            }
        }
    }
    return 0;
}