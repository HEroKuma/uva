#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,i,j=0;
	int b[1000];

	while(cin >> a){
	  if(a<0)
	    break;
	  else if(a==0) cout << 0 << endl;
	  else{
	   	for(i=0;i<1000;i++) b[i]=0;
	    while(a!=0){
	 	  b[j]=a%3;
	 	  a=a/3;
	 	  j++;
	     }
	    while(j--){
	      printf("%d",b[j]);
	     }
	      printf("\n");
		  j=0;
	   }
     }
	return 0;
}
