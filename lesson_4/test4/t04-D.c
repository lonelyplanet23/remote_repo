#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int main()
{
    int y, m, d, w;
    while(scanf("%d%d%d", &y, &m, &d) != EOF)
    {
        if(m < 3)
        {
            m = 12 + m;
            y = y - 1;
        }
        if (m < 3)
        { 
            y = y - 1;
            m = m + 12;
        }
        //! 下面四行检查！
        int c = y / 100; 
        y = y % 100; 
        w = (y + y / 4 + c / 4- 2 * c + (26 * (m + 1)) / 10 + d - 1) % 7;
        if (w < 0) w += 7; 
        switch (w)
        {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    }
    return 0;
}
