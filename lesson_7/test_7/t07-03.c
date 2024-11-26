#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)

double a[20];
void Shie(int n, double a[], double *p, double *q);

int main()
{
    /*------下面根据指引写你自己的代码------*/
    //定义 int 型变量 n，double 型变量 p 和 q
    int n;
    double p, q;
    //读取n
    scanf("%d", &n);
    //从第n项开始，一直到第0项，读取全局数组a
    for(int i = n; i >= 0; i--)
    {
        scanf("%lf", &a[i]);
    }
    //调用Shie函数
    Shie(n, a, &p, &q);
    //输出p q
    printf("%.6f %.6f", p, q);
    return 0;
}

/*--下面是Shie函数，只要调用即可，无需理解原理--*/
void Shie(int n, double a[], double *p, double *q) 
{
    double eps = 1e-12;
    double b[20];
    double c[20];
    // 数组 b 是多项式 a 除以当前迭代二次三项式的商
    memset(b, 0, sizeof(b));
    // 数组 c 是多项式 b 乘以 x 平方再除以当前迭代二次三项式的商
    memset(c, 0, sizeof(c));
    *p = 0;
    *q = 0;
    double dp = 1;
    double dq = 1;
    while (dp > eps || dp < -eps || dq > eps || dq < -eps)  // eps 自行设定
    {
	double p0 = *p;
	double q0 = *q;
	b[n - 2] = a[n];
	c[n - 2] = b[n - 2];
	b[n - 3] = a[n - 1] - p0 * b[n - 2];
	c[n - 3] = b[n - 3] - p0 * b[n - 2];
	int j;
	for (j = n - 4; j >= 0; j--) {
            b[j] = a[j + 2] - p0 * b[j + 1] - q0 * b[j + 2];
  	    c[j] = b[j] - p0 * c[j + 1] - q0 * c[j + 2];
	}
	double r = a[1] - p0 * b[0] - q0 * b[1];
	double s = a[0] - q0 * b[0];
	double rp = c[1];
	double sp = b[0] - q0 * c[2];
	double rq = c[0];
	double sq = -q0 * c[1];
	dp = (rp * s - r * sp) / (rp * sq - rq * sp);
	dq = (r * sq - rq * s) / (rp * sq - rq * sp);
	*p += dp;
	*q += dq;
    }
    return;
}