#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
  char A[100000] = {0},B[100000] = {0};
  while(scanf("%s%s",A,B) != EOF){
    int Alen = strlen(A);
    int Blen = strlen(B);
    int i,j;

    for( i = 0,j = 0 ;i < Blen && j < Alen; i++) if(B[i] == A[j]) j++;

    if(j == Alen)
        cout << "Yes" <<endl;
    else
        cout << "No" << endl;
  }

  return 0;
}
