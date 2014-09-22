#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main ()
{
  int t;
  int h[30001];

  cin >> t;
  while(t--){
    int n,sum = 0;
    cin >> n;
    for(int i = 0 ;i < n; i++){
      cin >> h[i];
    }
    sort(h,h+n);
    for(int i = 0 ;i < n; i++){
      sum += abs(h[i] - h[n/2]);
    }
    cout << sum << endl;
  }

  return 0;
}
