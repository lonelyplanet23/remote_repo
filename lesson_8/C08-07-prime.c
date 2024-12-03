#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
double eps = 1e-9;
int isPrime(int primes[], int n)
 {
    int i;
    for(i=0; primes[i]*primes[i] <= n; i++)
    {
        if(n % primes[i]== 0)
            return 0;
    }
    return 1;
 }
int init_prime(int primes[], int n) //! 生成n个质数
{
    int cnt = 3, num, step;
    primes[0] = 2; primes[1] = 3; primes[2] = 5;
    num = 7, step = 2;
    while(cnt < n)
    {
        step = 6 - step; //* 以6为单位，构建4-2序列，把一定不是质数的数排除掉
        if(isPrime(primes, num))
        {
            primes[cnt++] = num; 
        }
        num += step;
    }
    return cnt;
}
int primes[10000001];
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = init_prime(primes, n);
    for(int i = 0; i < cnt; i++)
    {
        printf("%d ", primes[i]);
    }
    return 0;
}