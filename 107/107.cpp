#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define esp (1e-8)
using namespace std;

int main(){

	int h,w;

	while (cin >> h >> w){
      if (h==0 && w==0)
         break;
      else if (h==1 && w==1){
         cout << "0 1" << endl;
         continue;
      }
      for (int k=0;;k++){
        double n=pow(w,1.0/k);
        if (fabs(h-pow(1+n,k))<esp){
            double m;
            if (n>1) m=(pow(n,k+1)-1)/(n-1)-w;
            else m=k;
            double t=1,s=1;
            for (int i=1;i<k;i++){
                t*=n/(n+1);
                s+=t;
            }
            s*=h;
            printf("%.0f %.0f\n",m,s+w);
            break;
        }
      }
    }

	return 0;
}
