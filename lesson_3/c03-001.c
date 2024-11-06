//C03-01：给定一个整数n，输出该整数的二进制补码编码
#include<stdio.h>
#define len 32
int bits[len];
int main()
{
    int n,cnt = 1;
    scanf("%d", &n);
    while(n)
    {
        bits[cnt] = n & 1; //! &和 &=
        n >>= 1;
        cnt++;
    }
    for(int i = 32; i >= 1; i--) // 注意倒着输出
    {
        printf("%d ", bits[i]);
    }
    return 0;
}