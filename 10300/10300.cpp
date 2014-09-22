#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,f;
	
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&f);
		int a[f][3];
		int sum=0;
		while(f--)
		{
			scanf("%d%d%d",&a[f][0],&a[f][1],&a[f][2]);
			sum+=a[f][0]*a[f][2];
			printf("~%d~\n",sum);
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
