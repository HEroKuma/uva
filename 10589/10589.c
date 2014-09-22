#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

  int N,a;

  while(cin >> N >> a && N){
      int con=0;
    for(int i=0;i<N;i++){
        double x,y;
        cin >> x >> y;
        if(((x*x+y*y) <=a*a ) && (((x-a)*(x-a)+y*y)<=a*a) && (((x-a)*(x-a)+(y-a)*(y-a))<=a*a) && ((x*x+(y-a)*(y-a))<=a*a)) con++;
    }
    printf("%.5lf\n",(double)con*a*a/N);
  }


  return 0;
}
