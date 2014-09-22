#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long int DP[55];

int main(){

  DP[0]=1;
  DP[1]=2;
  for(int i=2;i<55;i++){
    DP[i]=DP[i-1]+DP[i-2];
  }

  int t,x=0;

  cin >> t;
  while(t--){
    x++;
    int N;
    cin >> N;
    cout << "Scenario #"
         << x
         << ":"
         << endl
         << DP[N]
         << endl
         << endl;
  }

  return 0;
}
