#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct BigInt{
    int ar[1001],len;
};

BigInt multi(BigInt a, int n){
    for(int i = 0 ;i < a.len; i++)
        a.ar[i] *= n;
    for(int i = 1 ;i < a.len; i++){
        a.ar[i] += a.ar[i-1] / 10;
        a.ar[i-1] %= 10;
    }
    while(a.ar[a.len-1] > 9){
        a.ar[a.len] = a.ar[a.len-1] / 10;
        a.ar[a.len-1] %= 10;
        a.len++;
    }
    return a;
}

BigInt div(BigInt c ,int n){
    int r = 0;
    BigInt a;
    a.len = c.len;
    for(int i = c.len-1 ;i >=0; i-- ) {
        r = r * 10 + c.ar[i];
        a.ar[i] = r / n;
        r %= n;
    }
    while(!a.ar[a.len-1])a.len--;
    return a;
}

BigInt fun[302];

int main()
{
    fun[1].ar[0] = fun[1].len = 1;
    for(int i = 1 ;i < 301; i++ )
        fun[i+1] = div(multi(fun[i],4 * i + 2),i + 2);
    int n;
    while(scanf("%d",&n) != EOF && n) {
        BigInt ans = fun[n];
        for(int i = 2 ;i <= n; i++ ) ans = multi(ans,i);
        for(int i = ans.len-1 ;i >= 0; i-- ) printf("%d",ans.ar[i]);
        puts("");
    }
    return 0;
}
