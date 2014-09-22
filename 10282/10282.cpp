#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
 char input[300];
 map<string,string> dictionary;

 while(gets(input)){

 if( input[0]=='\0')
   break;

 char *s1,*s2;

 s1=strtok(input," ");
 s2=strtok(NULL," ");

 string english = s1;
 string forigen = s2;

 dictionary.insert(pair<string,string>(forigen,english));
 }

 map<string,string>::iterator it;
 string word;
 while(cin >> word){

 it=dictionary.find(word);

 if(it==dictionary.end())
     cout << "eh" << endl;
 else
     cout << it->second << endl;
 }

 return 0;
}
