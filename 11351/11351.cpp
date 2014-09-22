#include<iostream>

using namespace std;

int main()
{
    int t,n,k,time = 1;
    cin >> t;
    while(t--){
        int a,b,c,ans = 0;
        cin >> n >> k;
        cout << "Case  "<< time << ": ";
        for(a=2;a<=n;a++)
            ans=(ans+k)%a;
        cout << ans+1 << endl;
    }
    return 0;
}
