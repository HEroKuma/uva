#include <iostream>
#include <stdio.h>
#include <stdlib.h>

long long int reverse(long long int a)
{
  long long int r=0;
  while(a!=0)
  {
  	r*=10;
  	r=r+a%10;
  	a=a/10;
  }
  return r;
}

int main() 
{
    long long int n,a,ans,temp;
    
    scanf("%lld",&n);
    while(n--)
    {
    	int i=0;
    	scanf("%lld",&a);
    	do
    	{   
    	    i++;
    	    a=a+reverse(a);
    		if(i>1000)
    		 break;
    	}while(a!=reverse(a));
    	printf("%d %lld\n",i,a);
    }
	
	return 0;
}
