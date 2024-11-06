
#include<stdio.h>
#include<math.h>
#define ll long long
// a = 0 b = 0 无穷解 
// a = 0 b != 0有一个解
// 
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    if(a == 0 && b == 0 && c != 0)
    {
        printf("No real root");
        return 0;
    }
    else if(a == 0 && b == 0 && c == 0)
    {
        printf("infinite solutions");
        return 0;
    }
    else if(a == 0)
    {

        printf("%.2f", -c / b);
        return 0;
    }
    else if (delta < 0)
    {
        printf("No real root");
    }
    else if (delta == 0)
    {
        printf("%.2f", -b / (2 * a));
    }
    else if(delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2)
        {
            printf("%.2f %.2f", x2, x1);
        }
        else printf("%.2f %.2f", x1, x2);
    }
    return 0;
}