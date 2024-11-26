#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
//! 学写cmp函数
//* comp: 指向数组元素比较函数的指针，接收两个元素的地址
//* (*comp)：函数负责比较两个元素，返回负数、正数和0，
//* 分别表示第一个参数先于、后于和等于第二个参数
int rise_double(const void* p1, const void* p2) //! 最标准写法
{
    double *d1 = (double *)p1;//! 空类型指针转化为具体类型
    double *d2 = (double *)p2;
    if(*d1 > *d2) return 1;
    else if(*d1 < *d2) return -1;
    else return 0;
}
int fall_double(const void* p1, const void* p2)
{
    double *d1 = (double *)p1;
    double *d2 = (double *)p2;
    if(*d1 > *d2) return 1;
    else if(*d1 < *d2) return -1;
    else return 0;
}
//* 点集排序 根据x 坐标值从小到大排序，如果x坐标相同，则按照y坐标值从大到小排序
struct point
{
    int x;
    int y;
};
struct point set[1001];
int my_cmp(const void* p1, const void* p2)
{
    struct point *point1 = (struct point *)p1;
    struct point *point2 = (struct point *)p2;
    if(point1->x > point2->x)
    {
        return 1;
    }
    else if(point1->x < point2->x)
    {
        return -1;
    } 
    else
    {
        if(point1->y > point2->y)
        {
            return 1;
        }
        else if(point1->y < point2->y)
        {
            return -1;
        }  
        else return 0;       
    }   
}
double eps = 1e-9;
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &set[i].x, &set[i].y);
    }
    qsort(set, n, sizeof(struct point), my_cmp);
    for(int i = 0; i < n; i++)
    {
        printf("(%d, %d) ", set[i].x, set[i].y);
    }
    return 0;
}