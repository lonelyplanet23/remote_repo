#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define len 32
#define ll long long
#define N 100001
double eps = 1e-9;
int sc[12];
int main()
{
    int n,y;
    scanf("%d", &n); 
    for(int i = 0; i < n; i++)
    {
        int pass = 0, sc, k;
        scanf("%d", &y);
        for(int j = 1; j <= 10; j++)
        {
            int x;
            scanf("%d", &x);
            pass += x;
        }
        switch (pass)
        {
            case 7:
                sc = 95;
                break;
            case 8:
                sc = 99;
                break;
            case 9:
                sc = 100;
                break;
            case 10:
                sc = 100;
                break;
        
            default:
                sc = pass * 15;
                break;
        }
        scanf("%d", &k);
        if(k == 0)
        {
            if(sc < 60)
            {
                sc = 0;
            }
            else if(sc >= 60)
            {
                sc = 60;
            }
        }
        if(y == 2024)
        {
            if(sc >= 90)
            {
                printf("Congratulations, you pass the exam and your score is %d.\n", sc);
            }
            else
            {
                printf("You have to take the course.\n");
            }
        }
        else if(y != 2024)
        {
            if(sc >= 60)
            {
                printf("Congratulations, you pass the exam and your score is %d.\n", sc);
            }
            else
            {
                printf("You have to take the course.\n");
            }            
        }
    }  
    return 0;
}