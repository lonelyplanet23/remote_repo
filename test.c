#include<stdio.h>
int main()
{
    int a,b,p;
    scanf("%d%d%d", &a, &b, &p);
    if(a + b > 0)
    {
        printf("%d\n", (a+b) % p);
    }
    else if(a + b == 0)
    {
        printf("0\n");
    } 
    else{
        printf("%d\n", p + ((a+b) % p));//*一定小心 + 和 % 的优先顺序！
    }
    return 0;
}