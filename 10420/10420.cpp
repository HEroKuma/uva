#include <iostream>
#include <map>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
  int n;
  char x;

  map<string,int> list;
  map<string,int>::iterator it;
  cin >> n;
  cin.ignore();
  while(n--){
      //cout << "test" << endl;
  char data[100];
  gets(data);
  if(data[0]=='\0')
      break;

  char *s1,*s2;
  int num=1;

  s1=strtok(data," ");
  s2=strtok(NULL," ");

  string country = s1;

  it=list.find(s1);
  if(it==list.end())
   list.insert(pair<string,int>(s1,num));
  else
   it->second++;
  }

  for(it=list.begin();it!=list.end();it++){
       cout << it->first << " " << it->second << endl;
  }
  return 0;
}
