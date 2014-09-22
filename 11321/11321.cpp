#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

struct MOD
{
    int num;
    int mod;
};

bool my_cmp(struct MOD a, struct MOD b)
{
    if(a.mod!=b.mod) return a.mod<b.mod;
    else
    {
        if((a.num%2==1||b.num%2==-1)&&(b.num%2==1||a.num%2==-1))
            return a.num>b.num;
        else if(a.num%2==0 &&b.num%2==0)
            return a.num<b.num;
        else
            return (a.num%2==1||a.num%2==-1);
    }
}

int main()
{

    freopen("in.txt","r",stdin);

    int m,n,i,j;
    cin >> m >> n;
    while(m!=0 && n!=0)
    {
        struct MOD table[m];
        for(i=0; i<m; i++)
        {
            scanf("%d",&table[i].num);
            table[i].mod=table[i].num%n;
        }

        sort(table,table+m,my_cmp);

        cout << m << " " << n << endl;
        for(i=0; i<m; i++)
        {
            cout << table[i].num << endl;
        }

        cin >> m >> n;

    }

    cout << "0 0" << endl;

    return 0;
}
