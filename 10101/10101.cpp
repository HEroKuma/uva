#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void printN(long long int);

int main()
{
  long long n;
  int num = 1;
  while(cin >> n){
    printf("%4d.",num);
    if(n) printN(n);
    else cout << " 0";
    cout << endl;
    num++;
  }

  return 0;
}

void printN(long long int n)
{
  if( n == 0) return;
  if(n/10000000){
    printN(n/10000000);
    cout << " kuti";
    n %= 10000000;
  }
  if(n/100000){
    printN(n/100000);
    cout << " lakh";
    n %= 100000;
  }
  if(n/1000){
    printN(n/1000);
    cout << " hajar";
    n %= 1000;
  }
  if(n/100){
    printN(n/100);
    cout << " shata";
    n %= 100;
  }
  if(n) cout << " " << n;
}
