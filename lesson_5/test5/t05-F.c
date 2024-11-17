#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int isLeap(int year){
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); //百年不闰 四百再闰
}
int isDate(int date)
{
    int year = date / 10000;
    int month = date % 10000 / 100;
    int day = date % 100;
    if(!month || month > 13 || !day) return 0;
    if(month != 2 && day > months[month]) return 0;
    if(month == 2)
    {
        int leap = isLeap(year);
        if(day > months[2] + leap) return 0;
    }
    return 1;
}
int isSquare(int x) // ! 积累
{
    int s =(int) sqrt(x);
    return (s * s == x);
}
int date_combine(int y, int m, int d)
{
    return y * 10000 + m * 100 + d;
}// * 20240000 + 200 + 12
int main()
{
    int date1, date2;
    while(~scanf("%d%d", &date1, &date2))
    {
        int ans = 0;
        int year1 = date1 / 10000;
        int month1 = date1 % 10000 / 100;
        int day1 = date1 % 100;
        int year2 = date2 / 10000;
        int month2 = date2 % 10000 / 100;
        int day2 = date2 % 100;
        for(int y = year1; y <= year2; y++)
        {
            if(y == year1)
            {
                for(int m = month1; m <= 12; m++)
                {
                    for(int d = 1; d <= 31; d++)
                    {
                        if(d < day1) continue;
                        else
                        {
                            int date = date_combine(y, m, d);
                            if(isDate(date))
                            {
                                if(isSquare(date))
                                {
                                    ans++;
                                    //printf("the perfect date : %d\n", date);
                                }
                            }
                        }
                    }
                }
            }
            else if(y == year2)
            {
                for(int m = 1; m <= month2; m++)
                {
                    for(int d = 1; d <= 31; d++)
                    {
                        if(d > day2) continue;
                        else
                        {
                            int date = date_combine(y, m, d);
                            if(isDate(date))
                            {
                                if(isSquare(date))
                                {
                                    ans++;
                                    //printf("the perfect date : %d\n", date);
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                for(int m = 1; m <= 12; m++)
                {
                    for(int d = 1; d <= 31; d++)
                    {
                        int date = date_combine(y, m, d);
                        if(isDate(date))
                        {
                            if(isSquare(date))
                            {
                                ans++;
                                //printf("the perfect date : %d\n", date);
                            }
                        }
                        
                    }
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}