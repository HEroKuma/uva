#include<iostream>
#include<cstdio>

using namespace std;

int con(long);
int bin[35] = {0};
void print();
int s,d;


int main()
{
    long num;

    while(cin >> num && num){
            int ans = con(num);
            printf("The parity of ");
            print();
            printf(" is %d (mod 2).\n",ans);
    }

    return 0;
}

int con(long a){
    s = 0;
    d = 0;
    while(a > 0){
        if(a%2 == 1)
            s++;
        bin[d++] = a%2;
        a /= 2;
    }
    return s;
}

void print(){
    for(int i = d-1 ;i >= 0; i--)
        cout << bin[i];
    return;
}
