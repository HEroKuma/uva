#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  string baseone;
  string basetwo = "";
  int num;
  char flag;

  while( cin >> baseone && baseone != "~"){
    if(baseone == "#"){
        num = 0;
        for(int i = 0 ; i < basetwo.length() ; i++){
            if( i ) num *= 2;
            if( basetwo[i] == '1' ) num +=1 ;
        }
        basetwo = "";
        cout << num << endl;
    }
    else if( baseone.length() == 1 )
        flag = '1';
    else if( baseone.length() == 2 )
        flag = '0';
    else
        for( int i = 0 ; i < baseone.length()-2 ; i++)
        basetwo += flag;
  }

  return 0;
}
