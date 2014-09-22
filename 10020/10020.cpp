#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct line{
    int L;
    int R;
} a[100001];

bool cmp(line,line);

int main()
{
    int T,M;
    cin >> T;
    while (T--){
        cin >> M;
        int i,j,n = 0;
        while(cin >> a[n].L >> a[n].R){
            if(!a[n].L && !a[n].R)
                break;
            n++;
        }
        sort(a,a+n,cmp);

        int ans = 0,left = 0,right = 0,Max = 0,Max_index;
        int List[100001],l_index = 0;
        bool Ans = 1;

        while(Max < M){
            right = Max;
            for(i = left ;a[i].L <= right && i < n; i++){
                if(Max < a[i].R){
                    Max = a[i].R;
                    Max_index = i;
                }
            }
            if(Max == right){
                Ans = 0;
                break;
            }
            List[l_index++] = Max_index;
            ans++;
            left = i;
        }

        if(Ans){
            cout << ans << endl;
            for(i = 0 ;i < l_index; i++)
                cout << a[List[i]].L << " " << a[List[i]].R << endl;
        }
        else
            cout << "0" << endl;

        if(T)
            cout << endl;

    }
    return 0;
}

bool cmp(line a,line b){
    if(a.L == b.L) return a.R < b.R;
    return a.L < b.L;
}
