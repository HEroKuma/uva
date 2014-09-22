#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(){
  int len[10001];
  int n;
  int i=0;

  while(cin >> n){
        len[i]=n;
        i++;
        sort(len,len+i,less<int>());
        int add;
        if(i==1)
            cout << len[0] << endl;
        else if(i%2==0){
            add=i/2;
            cout << (len[add-1]+len[add])/2 << endl;
        }
        else{
            add=i/2;
            cout << len[add] << endl;
        }
  }

  return 0;
}
