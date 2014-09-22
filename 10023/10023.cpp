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
        for(i = 1 ;; i++){
            sum += i;
            if(sum > n && (sum - n)%2 == 0)
                break;
        }
        cout << (n == 0 ? 3 : i) << endl;
        if(t)
            cout << endl;
    }

    return 0;
}
