#include<stdio.h>
int main()
{
    int n,t = 0; 
    int b[1002], s1[1002];
    int as;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &as);
        if(as == 1)
        {
            b[t] = i + 1;
            t++;
        }
        s1[i] = 0;
    }
    for(int i = 0; i < t; i++)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        s1[i] = s1[i] + (a+b+c);
    }
    printf("Answer:");
    for(int i = 0; i < t; i++)
    {
        if(s1[i] >= 2)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}