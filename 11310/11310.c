#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long int DP[45];

int main(){

  DP[0]=1;
  DP[1]=1;

  for(int i=2;i<45;i++){
        DP[i]=DP[i-1]+4*DP[i-2]+2*DP[i-3];
  }

  int n;

  cin >> n;
  while(n--){
      int t;

      cin >> t;
      cout << DP[t] << endl;
  }
  return 0;
}
