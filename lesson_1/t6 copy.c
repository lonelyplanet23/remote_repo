#include<stdio.h>
int main()
{
    int a,sum;
    int cnt = 0;
    scanf("%d",&a);
    while(a != -1)
    {
        sum += a;
        cnt += 1;
        scanf("%d",&a);
    }
    printf("%d", sum/cnt);
    return 0;
}