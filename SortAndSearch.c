#include <stdlib.h>
//////////////////////////////////////////////////
// Sort int array
int n;
int a[N];

int compare(const void *e1, const void *e2)
{
    int v1 = *((int *)e1);
    int v2 = *((int *)e2);
	if(v1 > v2) return 1;
	if(v1 < v2) return -1;
	return 0;
}

qsort(a, n, sizeof(int), compare); // Use > 0 to swap

// Search an element in the sorted array
int key;
int *p;
p = (int *)bsearch(&key, a, n, sizeof(int), compare); // Use == 0 to return

//////////////////////////////////////////////////
// Sort double array
int n;
double a[N];

int compare(const void *e1, const void *e2)
{
    double v1 = *((double *)e1);
    double v2 = *((double *)e2);
	if(v1 > v2) return 1;
	if(v1 < v2) return -1;
	return 0;
}

qsort(a, n, sizeof(double), compare);

//////////////////////////////////////////////////
// Sort long long array
int n;
long long a[N];

int compare(const void *e1, const void *e2)
{
    long long v1 = *((const long long *)e1);
    long long v2 = *((const long long *)e2);
	if(v1 > v2) return 1;
	if(v1 < v2) return -1;
	return 0;
}

qsort(a, n, sizeof(long long), compare);

//////////////////////////////////////////////////
// Sort array of char array
char buf[100][105];
int n;

qsort(buf, n, sizeof(buf[0]), strcmp);

//////////////////////////////////////////////////
// Sort char* array
char *lines[100];
int n;

int compare(const void *p1, const void *p2)
{
    char *a = *(char **)p1;
    char *b = *(char **)p2;
    return strcmp(a, b);
}

qsort(lines, n, sizeof(char *), compare);


//////////////////////////////////////////////////
// Sort array of int array
int data[100][3];
int n;

int compare(const void *e1, const void *e2)
{
    int *p1 = (int *)e1;
    int *p2 = (int *)e2;
	if(p1[0] > p2[0]) return 1;
	if(p1[0] < p2[0]) return -1;
	// You can use p[1], p[2] as well
	return 0;
}

qsort(buf, n, sizeof(data[0]), compare);


///////////////////////////////////////////////////
void bubbleSort(int a[], int n)
{
    int i, j, hold, flag;
    for(i = 0; i < n-1; i++)
    {
        flag = 0;
        for( j = 0; j < n-1-i; j++)
            if(a[j] > a[j+1])
            {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
                flag = 1;
            }
        if (0 == flag)
            break;
    }
}


////////////////////////////////////////////////////
// 找到所有和key相同的元素中的第一个或最后一个对应的指针
// 因为返回值是指针所以不能直接使用，但是可以减去数组首指针来使用
// int a[] = {1,2,2,3,3}; (findFirst(&a[0], &a[4], 2) - &a[0])得到1，即第一个2的坐标
// int a[] = {1,2,2,3,3}; (findLast(&a[0], &a[4], 2) - &a[0])得到2，即最后一个2的坐标
int* findFirst(int* low, int* high, int key)
{
    int* mid = NULL;

    if(low > high) return NULL;
    if(*low > key || *high < key) return NULL;
    if(*low == key) return low;
    if(low == high) return NULL;

    mid = low + (high - low) / 2;
    if(*mid > key)
    {
        return findFirst(low + 1, mid - 1, key);
    }
    else if(*mid < key)
    {
        return findFirst(mid + 1, high, key);
    }
    else
    {
        return findFirst(low + 1, mid, key);
    }
}

int* findLast(int* low, int* high, int key)
{
    int* mid = NULL;

    if(low > high) return NULL;
    if(*low > key || *high < key) return NULL;
    if(*high == key) return high;
    if(low == high) return NULL;

    mid = low + (high - low) / 2;
    if(*mid > key)
    {
        return findLast(low, mid - 1, key);
    }
    else if (*mid < key)
    {
        return findLast(mid + 1, high - 1, key);
    }
    else
    {
        return findLast(mid, high - 1, key);
    }
}

