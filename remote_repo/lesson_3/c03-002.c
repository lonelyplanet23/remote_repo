//⚫C03-02：用C语言给一个无符号整数a 的bit7～bit17赋值937，同时给bit21～bit25赋值17（位数从0开始
#include<stdio.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);
    
    //* 937 << 7
    n &= ~((1<<11) - 1) << 7; //! 先造出10位1，移动到7-17位，再取反
    n |= (937 << 7);
    n &= ~((1<<6) - 1) << 21;
    n |= (17 << 21);
    printf("%u", n);

    return 0;
}

