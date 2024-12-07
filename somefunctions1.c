#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int isPrime(ll n) 
{
    ll i, step;
    if (n == 2LL || n == 3LL || n == 5LL || n == 7LL) //找出前几个素数
        return 1; // 素数返回1
    else if (n % 2LL == 0 || n % 3LL == 0 || n % 5LL == 0 || n % 7LL == 0)
        return 0; // 能被任意一个素数整除（先处理前4个素数），则是合数
    else
    {
        step = 4LL;
        for (i = 7LL + step; i * i <= n; i+= step)
        {   
    //能被任意素数整除（i=(6n+1+step)，step为4-2切换），则是合数
            if (n % i == 0)
                return 0;
            step = 6LL-step;
        }
    }
    return 1;
 }

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int getDaysOfMonth(int year, int month){
    int days = 0;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = isLeap(year)?29 : 28;
            break;
    }
    return days;
}
int isLeap(int year){
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); //百年不闰 四百再闰
}
ll fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return 1LL;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}
int date_combine(int y, int m, int d)
{
    return y * 10000 + m * 100 + d;
}// * 20240000 + 200 + 12

void move(int n, char from, char to){
    printf("move %d from %c to %c\n", n, from, to);
}
void hanoi(int n, char from, char via, char to){
    if(n == 1) {
        move(n, from, to);
        return;
    }
    //把n-1个盘子从from通过to移到via
    hanoi(n-1, from, to, via);
    //把第n个盘子从from移到to
    move(n, from, to);
    //把n-1个盘子从via通过from移到to
    hanoi(n-1, via, from, to);
}
ll gcd(ll a, ll b)
{
    if(b == 0)
    {
        return a;
    }
    else return gcd(b, a % b);
}
ll lcm (ll a, ll b)
{
    return (a / gcd(a,b)) * b;
}
long long fastPower(long long base, long long power, long long mod)
{
    long long result = 1;
    while(power > 0)
    {
        if(power & 1)
        {
            result = result * base % mod;
        }
        power >>= 1;
        base = (base * base) % mod;
    }
    return result;
}
int main()
{
    int a, b, c;
    ll n;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", date_combine(a, b, c));
    return 0;
}
