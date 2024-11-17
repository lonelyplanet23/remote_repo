1. 分组输出时一定要有回车\n
2. 移位运算时，若超出32位，需要在数字后加上LL(如：1LL << i)
    + long long 类型 常数后加LL
3. 条件中“==”
4. 先除后乘，大数乘法很容易爆栈
5. for循环中尽量不要改变i的值，否则可能会出错
6. **%lf** **%.nf**
7. *void *memset(void *str, int c, size_t n)*
   1. *str -- 指向要填充的内存区域的指针。 即数组名字
   2. c -- 要设置的值，通常是一个无符号字符。
   3. n -- 要被设置为该值的字节数。sizeof(*数组*)
8. qsort函数包含四个参数，分别是：
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