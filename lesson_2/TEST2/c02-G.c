#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double s1,s2;
    s1 = sqrt((a+c)*(a+c) + (b-d)*(b-d));
    s2 = sqrt((a-c)*(a-c) + (b+d)*(b+d));
    if(s1 > s2)
    {
        printf("%.2f", s2);
    }
    else printf("%.2f", s1);
    
    return 0;
}