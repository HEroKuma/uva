#include<iostream>
#include<cstdio>
#include<string.h>
#define MAX 10000010

using namespace std;

int prime[MAX];
bool make_prime[MAX];
int num;
int n;

void prepare(){
	int i,j;
	memset(make_prime,true,sizeof(make_prime));

	for(i = 2 ; i <= MAX ; ++i){
		if(make_prime[i]){
			prime[++num] = i;
		}

		for(j = 1 ; j <= num ; ++j){
			if(i*prime[j] > MAX){
				break;
			}

			make_prime[i*prime[j]] = false;

			if(i % prime[j] == 0){
				break;
			}
		}
	}
}

int main()
{
    prepare();
    int a,b;
    while(cin >> n && n){
        if(n<=7)
        {
            printf("Impossible.\n");
            continue;
        }
        if(n%4 == 0){
            a = b = n/2;
            //cout << a << " " << b << endl;

            bool flagA = false;
            int i;
            for(i = 1 ;i <= num; ++i){
                if(prime[i]*2 > a) break;
                if(make_prime[a - prime[i]]){
                    flagA = true;
                    break;
                }
            }

            bool flagB = false;
            int j;
            for(j = 1 ;j <= num; ++j){
                if(prime[j]*2 > b) break;
                if(make_prime[b - prime[j]]){
                    flagB = true;
                    break;
                }
            }
            if(flagA && flagB) printf("%d %d %d %d\n",prime[i],a - prime[i],prime[j],b - prime[j]);
        }
        else if(n%4 == 2){
            a = (n/2)+1;
            b = n-a;

            bool flagA = false;
            int i;
            for(i = 1 ;i <= num; ++i){
                if(prime[i]*2 > a) break;
                if(make_prime[a - prime[i]]){
                    flagA = true;
                    break;
                }
            }

            bool flagB = false;
            int j;
            for(j = 1 ;j <= num; ++j){
                if(prime[j]*2 > b) break;
                if(make_prime[b - prime[j]]){
                    flagB = true;
                    break;
                }
            }
            if(flagA && flagB) printf("%d %d %d %d\n",prime[i],a - prime[i],prime[j],b - prime[j]);
        }
        else{
            a = (n-5);

            bool flagA = false;
            int i;
            for(i = 1 ;i <= num; ++i){
                if(prime[i]*2 > a) break;
                if(make_prime[a - prime[i]]){
                    flagA = true;
                    break;
                }
            }
            if(flagA) printf("2 3 %d %d\n",prime[i],a - prime[i]);
        }
    }

    return 0;
}
