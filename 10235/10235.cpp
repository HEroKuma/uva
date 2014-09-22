#include<iostream>

using namespace std;

bool is_prime[10010];
int prime_table[5000];

int inverse(int);
void prepare();

int main()
{
    prepare();
    int n;
    while(cin >> n && n){
        int vn = inverse(n);
        if(is_prime[n] && is_prime[vn])
            cout << n << "is emirp." << endl;
        else if(is_prime[n])
            cout << n << "is prime." << endl;
        else
            cout << n << "is not prime." << endl;
    }

    return 0;
}

int inverse(int n)
{
    int ans = 0;

    while(n > 0){
        ans  = ans*10+(n%10);
        n /= 10;
    }
    return ans;
}

void prepare()
{
    int d = 0;
    for(int i = 0 ;i < 10010; is_prime[i++] = 1);
    for(int i = 0 ;i < 5000; prime_table[i++] = 0);

    for(int i = 2 ;i < 10010; i++){
        if(is_prime[i])
            for(int j = 2 ;i*j < 10010; j++)
                is_prime[i*j] = 0;
    }
    for(int i = 0 ;i < 10010; i++)
        if(is_prime[i])
            prime_table[d++] = i;
}
