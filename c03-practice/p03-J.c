//!用位运算求出最大值！
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
double eps = 1e-9;
int main()
{
    //!通过移位操作，32位的mask中产生了与a-b符号相同的全1或者全0整型
    //!即如果a-b>0，则mask为全0；如果a-b<0，则mask为全1，然后通过位操作即可以得到所要的结果了。
    int a, b, mask = 0;
    scanf("%d%d", &a, &b);
    mask = (b-a)>>31;
    printf("%d\n", (a & mask) | (b & ~ mask));

    scanf("%d%d", &a, &b);
    mask = (b-a)>>31;
    printf("%d\n", (a & mask) | (b & ~ mask));

    scanf("%d%d", &a, &b);
    mask = (b-a)>>31;
    printf("%d\n", (a & mask) | (b & ~ mask));

    return 0;
}