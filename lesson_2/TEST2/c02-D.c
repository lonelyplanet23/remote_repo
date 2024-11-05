#include<stdio.h>
int main()
{
    int n,flag,i;
    scanf("%d", &n);
    char a;
    getchar();
    for(i = 0; i < n; i++)
    {
        a = getchar();
        if(a == 'b') 
        {
            printf("CVBB");
            break;
        }
    }
    if(i >= n)
    {
        printf("CVB");
    }
    return 0;
}