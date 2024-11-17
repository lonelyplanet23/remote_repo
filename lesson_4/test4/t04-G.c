#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
#define N 1000001
double eps = 1e-9;
ll n,k;
char a[N];
int main()
{
    scanf("%lld%lld",&n,&k);
    getchar();
    for(int i = 0; i < n; i++)
    {
        a[i] = getchar();
    }
    char digits[n * 2 + 1];
    int len = n;
    for (int i = 1; i <= k; i++) {
        int sum = 0;
        for (int j = 0; j < len; j++) {
            sum += digits[j] - '0';
        }
        len = sprintf(digits, "%d", sum);
        for(int i = 0; i < len; i++)
        {
            printf("%c",digits[i]);
        }
        printf("\n");
    }
    for(int i = 0; i < len; i++)
    {
        printf("%c",digits[i]);
    }
    return 0;
}