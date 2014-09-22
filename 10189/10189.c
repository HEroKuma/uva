#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

  int n,m;
  int con=0;
  char c;
  while(cin >> m >> n){
    con++;
    if(n==0 && m==0)
        break;
    char num[n+2][m+2];
    for(int i=0;i<m+2;i++){
        for(int j=0;j<n+2;j++)
            num[i][j]='0';
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            num[i][j]=getchar();
            if(num[i][j]=='*') num[i][j]='9';
            else num[i][j]='0';
        }
        c=getchar();
    }

    for(int i=0;i<=m+1;i++){
        for(int j=0;j<=n+1;j++){
            cout << num[i][j];
        }
        cout << endl;
    }
    cout << endl;

    int dx[8]={ 0, 1,1,1,0,-1,-1,-1};
    int dy[8]={-1,-1,0,1,1, 1, 0,-1};

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(num[i][j]>='9'){
                for(int k=0;k<8;k++){
                    int a=j+dx[k];
                    int b=i+dy[k];
                    if(a>=0 && a<=n && b>=0 && b<=m){
                        if(num[b][a]<='9') num[b][a]++;
                    }
                }
            }
        }
    }
    cout << "Field #"
         <<  con
         <<  ":"
         << endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(num[i][j]>='9') cout << "*";
          else cout << num[i][j];
        }
        cout << endl;
    }
    cout << endl;
  }

  return 0;
}
