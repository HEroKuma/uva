#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long int typeA[30];
long long int typeB[30];

int F(int n);
int R(int n);

int main(){
  typeA[0]=0;
  typeA[1]=0;
  typeA[2]=3;
  typeB[0]=0;
  typeB[1]=1;
  typeB[2]=0;
  for(int i=3;i<30;i++){
    typeA[i]=-1;
    typeB[i]=-1;
  }

  int N;

  while(cin >> N){
    if(N==-1) break;
    if(N%2!=0) cout << "0" << endl;
    cout << F(N) << endl;
  }

  return 0;
}


int F(int n)
{
  if(typeA[n]!=-1)
      return typeA[n];
  else{
      typeA[n]=F(n-2)+2*R(n-1);
      return typeA[n];
  }
}

int R(int n)
{
  if(typeB[n]!=-1)
       return typeB[n];
  else{
       typeB[n]=F(n-1)+R(n-1);
       return typeB[n];
  }
}
