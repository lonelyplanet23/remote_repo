#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
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
#define loop(i,l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
void bubbleSort(int a[], int n, char ch)
{
    int flag = 0;
    loop(i, 1, n+1)
    {
        flag = 0;
        for(int j = 1; j < n - i; j++) //! if I write it in "j < i", then 相当于只遍历1次
        {
            if(ch == 'u')
            {
                if(a[j] > a[j+1])
                {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    flag = 1;
                }
            }
            if(ch == 'd')
            {
                if(a[j] < a[j+1])
                {
                    int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    flag = 1;
                }
            }
        }
        if(!flag) return;
    }
}
int main()
{
    int a[10] = {0, 1, 5, 6, 3, 7, 8, 9};
    bubbleSort(a, 7, 'u');
    loop(i, 0, 8)
    {
        printf("%d ", a[i]);
    }
    return 0;
}