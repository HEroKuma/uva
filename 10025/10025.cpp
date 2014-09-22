#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int t;

    cin >> t;
    int n,i,sum = 0;
    while(t--){
        cin >> n;
        n = abs(n);
        for(i = 0 ;; i++){
            if(i*(i+1)/2 >= n && (i*(i+1)/2-n)%2 == 0)
                break;
        }
        cout << (n == 0 ? 3 : i) << endl;
        if(t)
            cout << endl;
    }

    return 0;
}
