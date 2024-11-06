#include <stdio.h>
#define BITS_PER_WORD 32 //一个整型是32位，可充当32位位图
#define MASK 0x1f//十进制里的31，二进制中11111
#define SHIFT 5//移动一位，相当于乘或除以2，因而shift = 5意味着
            // 2^5 = 32，即把i右移5位，相当于i/32
            // 同样的存储位图的数组的元素类型也要发生相应的改变，BITS_PER_WORD == 8，char
            // BITS_PER_WORD == 64, ⇒ long long
#define N 10000000
int a[1+N/BITS_PER_WORD];//数组中一个位置，就能存放32位数据，最大化利用

void set(int i) {//此函数的作用是将i位设置为1
    a[i >> SHIFT] |= (1 << (i & MASK)); //i & MASK(11111)表示取出i的最后5位，相当于寻找i在位的位置
    //获取掩码 1 << (i & MASK)表示将1左移i的最后五位，即乘以2^(...)，即把1放在i的位图中对应的位置上
}
            // a[i >> SHIFT] ⇒ i>>shift表示除以2^5,计算出这个数在哪一个数组的位置
void clr(int i) {//此函数的作用是将i位设置为0
    a[i >> SHIFT] &= ~(1 << (i & MASK));//~表示取反，那一位为0，其他位为1
    //将一个掩码与一个字进行按位与操作，那么掩码中为1的位将保持不变，掩码中为0的位将被清除(变成0)
}

int test(int i) {
    return a[i >> SHIFT] & (1 << (i & MASK));//如果那一位为0.那么所有数都为0；如果那位为一，那么返回值一定大于0，条件语句为真。
}
int main()
{
    int i, n, cnt = 0;
    scanf("%d", &n);
    for(i = 0; i < N; i++) {
        clr(i);
    }
    while(scanf("%d", &i) != EOF)
    {
        set(i);
    }
    for(i = 0; i < N; i++)
    {
        if(test(i))
        {
            printf("%d ", i);
            cnt++;
        }
        if(cnt >= 10)
        {
            printf("\n");
        }
    }
    return 0;
}