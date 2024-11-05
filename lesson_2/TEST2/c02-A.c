#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 32 && n <= 126)
    {
        putchar(n);
    }
    else
    {
        printf("Invisible Character!");
    }
    return 0;
}