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
void rev(char *p, char *q)
{
    int temp;
    while(p < q)
    {
        temp = *q; 
        *q = *p;
        *p = temp;
        p++;
        q--;
    }
}
char G[1002], S[10001];
char temp[10001];
int main()
{
    int k;
    scanf("%d", &k);
    scanf("%s", G);
    scanf("%s", S);
    char *p = S;
    for(char *p = S; *p != '\0'; p += k)
    {

        memset(temp, 0, sizeof(temp));
        strncpy(temp, p, k);
        temp[k+1] = '\0';
        char *ptr = temp;
        char *ss = strstr(temp, G);
        if(ss == NULL)
        {
            if()
            rev(ptr, ptr + k-1);
        }
        else
        {
            rev(ptr, ss-1);
            rev(ss + strlen(G), ptr+k-1);
        }
        printf("%s", temp);
    }
    return 0;
}