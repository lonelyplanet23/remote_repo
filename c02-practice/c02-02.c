#include<stdio.h>
#include<math.h>
#define ll long long
int main()
{
    int n;
    double f[6] = {0,1,0.4,0.2,0.2,0.1};
    int a;
    double sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 1; j <= 5; j++)
        {
            scanf("%d", &a);
            sum += (double)a * f[j];
        }
        if(sum <= 100)  printf("%.2f\n", sum);
        else printf("100.00\n");
    }
    return 0;
}