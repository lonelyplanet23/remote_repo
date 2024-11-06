#include<stdio.h>
#include<math.h>
int main()
{    
   int n;
   long long k;
   long long a[1000];
   long long sum = 0;
   long long num,fun;
   scanf("%d%lld",&n,&k);
    for(int i=0;i<n;i++)
    {
       	scanf("%lld",&a[i]);
       	sum += a[i];
	}
    num = sum/k;
    fun = sum%k;
      for(int i=0;i<n;i++)
		{
			
			if(a[i]>=(num*k))
       	        printf("%lld\n",a[i]-num*k);
       
            if(a[i]<(num*k))
                printf("0\n") ;
			
		}
			
			
		
    for(int i=0;i<n;i++)	 
    {
       	if (a[i]>=fun)
       	    printf("%lld\n",fun);
       	 
       	if(a[i]<fun)
       	    printf("%lld\n",a[i]);	
	}				
  return 0;	     
}