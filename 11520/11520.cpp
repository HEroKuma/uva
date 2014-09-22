#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) 
{
	int S,n;
	
	scanf("%d",&S);
	while(S--)
	{
		scanf("%d",&n);
		char t[n][n];
		char x;
		int i=0,j=0;
		for(i;i<n;i++)
		{
			for(j;j<n;j++)
			{
				scanf("%c",&t[i][j]);
			}
			scanf("%c",&x);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",&t[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
