#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
  char key[]="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  char input;

  while((input=getchar())!=EOF){
    int i;
    if(input==' '||input=='\n'){
        printf("%c",input);
        continue;
    }
    for(i=0;key[i]!=input;i++);
    printf("%c",key[i-1]);
  }

  return 0;
}
