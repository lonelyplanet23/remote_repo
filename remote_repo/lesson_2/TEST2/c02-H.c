#include<stdio.h>
#include<math.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a1,b1,c1,a2,b2,c2;
    scanf("%d%d%d", &a1, &b1, &c1);
    scanf("%d%d%d", &a2, &b2, &c2);
    if(a1 < a2) swap(&a1,&a2);
    if(b1 < b2) swap(&b1,&b2);
    if(c1 < c2) swap(&c1, &c2);
    // int a, b, c;
    // a = (a1 > a2) ? a1 : a2;
    // b = (b1 > b2) ? b1 : b2;
    // c = (c1 > c2) ? c1 : c2;
    int n, x, y, z;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        if(x>a2 && x<a1 && y>b2 && y<b1 && z>c2 && z<c1)
        {
            // if(x==a2 || x==a1 || y==b2 || y==b1 || z==c2 || z==c1)
            printf("Inner");
        }
        else if(x<a2 || x>a1 || y<b2 || y>b1 || z<c2 || z>c1)
        {
            // if(x==a2 || x==a1 || y==b2 || y==b1 || z==c2 || z==c1)
            printf("Outer");
        }       
        else
        {
            printf("Edge");
        }
        
    }

    return 0;
}