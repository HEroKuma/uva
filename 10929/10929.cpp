#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
  char N[1010];

  while( gets(N) && !(N[0] == '0' && N[1] == '\0')){
    int odd = 0,even = 0,i;
    int length = strlen(N);
    for( i = 0 ;i < length; i++){
      if(i % 2)
        odd += N[i] - '0';
      else
        even += N[i] - '0';
    }
    if( ! ( abs ( odd - even ) % 11 ) )
        printf( "%s is a multiple of 11.\n", N );
    else
        printf( "%s is not a multiple of 11.\n", N );
  }

  return 0;
}
