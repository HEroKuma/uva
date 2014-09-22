#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct coor{
    int x;
    int y;
};

int cross(coor o,coor a,coor b) {
    return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x);
}

int main(){

  int n;

  while(cin >> n && n){
    coor num[n+2];
    for(int i = 0 ;i < n; i++){
        cin >> num[i].x >> num[i].y;
    }
    num[n] = num[0];
    num[n+1] = num[1];
    int k = 0;
    if(cross(num[0],num[1],num[2]) >= 0 ){
        for(k = 0 ;k < n; k++){
            if(cross(num[k],num[k+1],num[k+2])<0)
                break;
        }
    }
    else{
        for(k = 0 ;k < n; k++){
            if(cross(num[k],num[k+1],num[k+2])>0)
                break;
        }
    }
    if(k != n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
  }
  return 0;
}
