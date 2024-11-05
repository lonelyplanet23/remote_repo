// #include<stdio.h>//库与函数
// int main()
// {
//     char st[20];
    
//     printf("input your name:");
//     scanf("%s", &st);//取地址！
//     for(int i = 0; i <= 5; i++)
//     {
//         printf("hello %s %d!\n", st, i);    
//     }
//     return 0;
// }
// //[!IMPORTANT]

// 以下是 VS Code 中的 C 语言代码调试面板功能的解释：

// 继续（Continue）：继续执行程序，直到遇到下一个断点或程序结束。
// 逐过程（Step Over）：逐行执行当前行，如果当前行是函数调用，则进入该函数并执行完毕。
// 单步调试（Step Into）：逐行执行当前行，如果当前行是函数调用，则进入该函数并停在函数内的第一行。
// 单步跳出（Step Out）：执行完当前函数的剩余部分，并停在当前函数被调用的下一行。
// 重启（Restart）：重新启动程序的调试会话，即从程序的起点开始执行。
// 停止（Stop）：停止程序的调试会话，结束调试过程并关闭程序执行。
#include<stdio.h>
int main()
{
    int a,b;

    int gcd = a;
    if(b < a) gcd = b;

    while(!((a % gcd == 0)&&(b % gcd == 0)))
    {
        gcd--;
    }
    printf("%d",gcd);
    return 0;
}