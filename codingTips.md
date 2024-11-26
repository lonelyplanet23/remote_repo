1. 分组输出时一定要有回车\n
2. 移位运算时，若超出32位，需要在数字后加上LL(如：1LL << i)
    + long long 类型 常数后加LL
3. 条件中“==”
4. 先除后乘，大数乘法很容易爆栈
6. for循环中尽量不要改变i的值，否则可能会出错
7. **%lf** **%.nf**
***
8. *void *memset(void *str, int c, size_t n)*
   1. *str -- 指向要填充的内存区域的指针。 即数组名字
   2. c -- 要设置的值，通常是一个无符号字符。
   3. n -- 要被设置为该值的字节数。sizeof(*数组*)
9.  qsort函数包含四个参数，分别是：
   1.  数组名
   2. 元素个数（从前往后计算）(个数)
   3.  数组元素所占字节（int，double，char等所占字节） `sizeof(int)`
   4.  排序原则（递增，递减，奇偶交叉等）
+ 实例：
```c
int cmp(const void *a,const void *b) {
	return *(int*)a-*(int*)b;
}
int cmp(const void *a,const void *b) {
	return *(double*)a>*(double*)b?1:-1;
}
qsort(num, n, sizeof(int), cmp);

```
9. 不定项输入，检查是否有`~`或`!= EOF`
10. `(n >> 1) + 1` 除以二再加1一定要加括号 
11. 二维数组循环时一定要看好上界
12. 调试输出：`fprintf(stderr, ....)`
13. 要想输出`%` 只需要`printf("%%")`即可转义  反斜杠同理
14. `sscanf`的用法
   + `int sscanf(const char *str, const char *format, ...)`
   + 参数
      + str -- 这是 C 字符串，是函数检索数据的源。
      + format -- 这是 C 字符串，包含了以下各项中的一个或多个：空格字符、非空格字符 和 format 说明符。
      + format 说明符形式为 `[=%[*][width][modifiers]type=]`等同于输入输出中的
   + 从输入的字符串中转化出不同类型变量，与`sprintf`对应
   + 如我想读入`17/Apr/2018:10:28`中的时间、月份等等只需要 `sscanf("%d/%s/%d:%d:%d", &day, month, &y, &h, &m)`

15. 声明一个指针变量，再使用时前，一定要有所指向，即合法化
+ 此为非法操作
   ```C
      int a = 5;
      int *p
      *p = 5 
   ``` 
+ 此为合法操作
   ```C
      int a = 5;
      int *p = a
      *p = 5 //调用指针的函数也算！
   ``` 
16. 二维数组传参，`int mat_multi(int a[][10]);` 第一个维度可以不用传，后面维度必须有(传行指针)
17. 