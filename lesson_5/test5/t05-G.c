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

int get_week(int y, int m)
{
    int d = 1, w;
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
    return w;
}
int isLeap(int year){
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); //百年不闰 四百再闰
}
int getDaysOfMonth(int year, int month){
    int days = 0;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = isLeap(year)?29 : 28;
            break;
    }
    return days;
}
int printFirstWeekCalendar(int weekday){
    int i, monthday = 1;
    if(weekday == 0) return 1;
    for(i = 1; i < weekday; i++) 
        printf("    ");
    printf("   ");
    for(i = weekday; i <= 6; i++)
        printf("   %d", monthday++);
    printf("\n");
    return monthday;
}
int printMiddleWeekCalendar(int monthday){
    int i;
    if(monthday < 10)
    {
            printf(" ");
    }
    printf(" %d", monthday++);
    for(i = 1; i <= 6; i++)
    {
        if(monthday < 10)
        {
            printf(" ");
        }
        printf("  %d", monthday++);
    }
    printf("\n");
    return monthday;
}
void printLastWeekCalendar(int monthday, int days){
    int i;
    if(monthday > days) return ;
    printf(" %d", monthday++);
    while(monthday <= days){
        printf("  %d", monthday++);
    }
    printf("\n");
}
 
void printMonthCalendar(int month, int days, int weekday){
    int monthday;
    monthday = printFirstWeekCalendar(weekday);
    while (days - monthday >= 7)
    {
        monthday = printMiddleWeekCalendar(monthday);
    }
    printLastWeekCalendar(monthday, days);

 }
int main()
{
    
    int year, month;
    scanf("%d%d", &year, &month);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    int start = get_week(year, month);
    //printf("start: %d\n", start);
    int days = getDaysOfMonth(year, month);
    printMonthCalendar(month, days, start);
    return 0;
}