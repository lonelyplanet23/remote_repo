#include<stdio.h>
int main()
{
    int a[4],b[4];
    int crs;
    scanf("%d%d%d",&a[1], &a[2], &a[3]);
    scanf("%d%d%d",&b[1], &b[2], &b[3]);
    printf("%d %d %d",a[2]*b[3]-a[3]*b[2],a[3]*b[1]-a[1]*b[3],a[1]*b[2]-a[2]*b[1]);
    return 0;
}