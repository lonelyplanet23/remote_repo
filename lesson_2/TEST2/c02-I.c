#include<stdio.h>
int main()
{
    int s[i],a;
    scanf("%d", &a);
    s[0] = a;
    for(int i = 1; i <= n; i++)
    {
        int n;
        scanf("%d", &n);
        s[i] = s[i-1] + n;
    }
    
    return 0;
}