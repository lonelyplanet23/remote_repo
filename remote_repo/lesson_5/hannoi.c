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
int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, '1', '2', '3');
    return 0;
}