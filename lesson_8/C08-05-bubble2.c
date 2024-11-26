#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
//! void *为无类型指针
 void swap_elem(void *e1, void *e2, int elemSize)
 {
    //* 传了两个指针
    int i;
    char tmp;//* 转成char* 指针
    for(i= 0; i< elemSize; ++i)
    {
        tmp= *(char*)(e1 + i); //* 转成char* 指针
        *(char*)(e1 + i) = *(char *)(e2 + i);
        *(char*)(e2 + i) = tmp;
    }
 }
 
void g_bub_sort(void *array, int len, int elemsize, int (*cmp)(const void *, const void *))
{
    for(int i = 1; i < len; i++)
    {
        for(int j = 1; j < len - i; j++)//!从下标为0
        {
            if(cmp(array + (j+1)*elemsize, array + j * elemsize))
            {
                swap_elem(array + (j+1)*elemsize, array + j * elemsize, elemsize);
            }
        }
    }
}
int main()
{
    return 0;
}