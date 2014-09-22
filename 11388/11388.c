#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

  long long int G,L,T;

  cin >> T;
  while(T--){
    cin >> G >> L;
    if(L%G) cout << -1 << endl;
    else cout << G << " " << L << endl;
  }

  return 0;
}
