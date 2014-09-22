#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  long long int a,b,c;

  while(cin >> a >> b){
    c = abs(a - b);
    cout << c << endl;
  }

  return 0;
}
