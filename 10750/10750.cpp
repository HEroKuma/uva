#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;

struct point{
    int x,y;
    bool operator<(const point &a) const{
         if(x != a.x)
             return x < a.x;
         return y < a.y;
    }
};

int main()
{


  return 0;
}
