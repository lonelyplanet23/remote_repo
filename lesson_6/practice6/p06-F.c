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
char input[2000001];
int check(int i, char str[])
{
    while(str[i] != '\0')
    {
        if(str[i] == 'x')
            return 1;
        i++;
    }
    return 0;
}
int main()
{
    scanf("f(x)=%s", &input);
    int i = 0;
    printf("f'(x)=");
    while(input[i] != '\0'&& check(i, input) == 1)
    {
        char token[30001];//!必须重置！！
        int j = 0;
        memset(token, '\0', sizeof(token));
        while(input[i] != '+' && input[i] != '\0')
        {
            token[j++] = input[i++];
        }
        i++;
        token[j] = '\0';
        int coeff1 = 1;
        char *coeff;
        char *pow;
        if(token[0] != '\0' && token[0] == 'x')
        {
            coeff1 = 1;
            pow = strtok(token, "x^");
            // *coeff = strtok(token, "x^");
        }
        else
        {
            coeff = strtok(token, "x^");
            pow = strtok(NULL, "x^");
            coeff1 *= atoi(coeff); //! convert it into integer
        }
        int exp = 1;
        if(pow != NULL)
        {
            exp = atoi(pow);
        }
        if(exp > 2)
        {
            coeff1 *= exp;
            exp--;
            printf("%dx^%d", coeff1, exp);
        }
        else if(exp == 2)
        {
            coeff1 *= exp;
            exp--;
            printf("%dx", coeff1);
        }
        else if(exp == 1)
        {
            printf("%d", coeff1);
        }
        if(input[i] != '\0' && check(i, input) == 1)
        {
            printf("+");
        }
    }
    return 0;
}