#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

  string M;
  int N,X1,X2,B1,B2;

  cin >>N;
  getchar();
    while(N--){
        getline(cin,M);
        B1=0;
        B2=0;
        sscanf(M.c_str(),"%d",&X1);
        while(X1){
            if(X1%2) B1++;
            X1/=2;
        }

        sscanf(M.c_str(),"%x",&X2);
        while(X2){
            if(X2%2) B2++;
            X2/=2;
        }

        cout << B1 << " " << B2 << endl;
    }
  return 0;
}
