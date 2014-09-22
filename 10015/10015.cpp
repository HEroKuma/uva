#include<iostream>

using namespace std;

bool is_prime[1000000];
int prime[500000];

void prepare();

int main()
{
    prepare();
    int n;
    while(cin >> n && n){
        int a,ans = 0,i;
        for(i = 1 ;i <= n; i++){
            ans = (ans + prime[n-i])%i;
        cout << ans+1 << endl;
    }
    return 0;
}

void prepare()
{
    for(int i = 0 ;i < 1000000; is_prime[i++] = true);
    for(int i = 2 ;i < 1000000; i++)
        if(is_prime[i])
            for(int j = 2 ;i*j < 1000000; j++)
                is_prime[i*j] = false;
    int d = 0;
    for(int i = 2 ;i < 500000; i++)
        if(is_prime[i])
            prime[d++] = i;
}
