#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int digit_sum(int);

int main(){

  int n;

  while(cin >> n && n){
    cout << digit_sum(n) << endl;
  }

  return 0;
}

int digit_sum(int n)
{
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    if(sum>=10)
        return digit_sum(sum);
    else
        return sum;
}
