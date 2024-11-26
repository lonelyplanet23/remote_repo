#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 1001
double eps = 1e-9;
char line[N], save[N];
int main()
{   
    int max = 0;
    char *lineptr, *longest, *temp;
    lineptr = line;
    longest = save;
    while(gets(lineptr) != NULL)
    {
        int len = strlen(lineptr);
        if(len > max)
        {
            max = len;
            //!重点语句 交换指针
            temp = longest;
            longest = lineptr;
            lineptr = longest;
        }
    }
    printf("%d:%s\n",max, longest);
    return 0;
}