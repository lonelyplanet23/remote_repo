#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
struct stu
{
    int pass;
    int fail;
};
struct stu arr[500002];
int my_cmp(const void* p1, const void* p2)
{
    struct stu *point1 = (struct stu *)p1;
    struct stu *point2 = (struct stu *)p2;
    if(point1->pass > point2->pass)
    {
        return -1;
    }
    else if(point1->pass < point2->pass)
    {
        return 1;
    } 
    else
    {
        if(point1->fail > point2->fail)
        {
            return 1;
        }
        else if(point1->fail < point2->fail)
        {
            return -1;
        }  
        else return 0;       
    }   
}
//! 
int main()
{
    int a, b;
    int n;
    scanf("%d", &n);
    loop(0, n-1)
    {
        scanf("%d%d", &arr[i].pass, &arr[i].fail);
    }
    qsort(arr, n, sizeof(struct stu), my_cmp);
    printf("%d: %d %d\n", 1, arr[0].pass, arr[0].fail);
    int cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i-1].pass == arr[i].pass && arr[i-1].fail == arr[i].fail)
        {
            printf("%d: %d %d\n", cnt, arr[i].pass, arr[i].fail);
        }
        else 
        {
            cnt = i+1;
            printf("%d: %d %d\n", cnt, arr[i].pass, arr[i].fail);
        }
        
    }
    
    return 0;
}