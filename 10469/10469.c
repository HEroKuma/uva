#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

  int a,b;
  while(scanf("%u %u",&a,&b)!=EOF){
    printf("%u\n",a^b);
  }

  return 0;
}
