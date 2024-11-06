#include<stdio.h>
#include<math.h>
int main()
{    
	char ch;
	int n = 0;
	while(scanf("%c",&ch)!=EOF)
	{  
	    if((ch>='a')&&(ch<='z'))
	        printf("%c%c",ch-32,ch);
	    else if((ch>='A')&&(ch<='Z')) 
	 	    printf("%c%c",ch,ch+32);
	 	else
	 	    printf("%c",ch);
	 }
	
	
  return 0;	     
}