#include<iostream>
#include<string.h>

using namespace std;

void NtoA(int*,int);

int main()
{
  int a,b;

  while(cin >> a >> b){
  if(a == 0 && b == 0) break;
  int A[15],B[15];
  int con = 0;
  memset(A,0,sizeof(A));
  memset(B,0,sizeof(B));
  NtoA(A,a);
  NtoA(B,b);
  
  for(int i = 0 ;i < 15; i++){
    if(A[i] + B[i] > 9){
    A[i+1]++;
    con++;
    }
  }
  if(con == 0) cout << "No carry operation." << endl;
  else if(con == 1) cout << "1 carry operation." << endl;
  else
    cout << con << " carry operations." << endl;
  }
	
  return 0;
}

void NtoA(int arry[],int n)
{
  int con = 0;
  while(n > 0){
  arry[con] = n % 10;
  con++;
  n /= 10;
  }
}
