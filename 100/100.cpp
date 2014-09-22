#include<iostream>

using namespace std;

int main()
{
	long n1,n2;
	while(cin >> n1 >> n2){
		long Max = 0;
		bool change = false;
		if(n1 > n2){
			long m = n1;
			n1 = n2;
			n2 = m;
			change = true;
		}
		for(long i = n1 ;i <= n2; ++i){
			long con = 1;
			long k = i;
			while(k != 1){
				if(k % 2 == 1)
					k = 3*k+1;
				else
					k /= 2;
				++con;
			}
			if(Max < con) Max = con;
		}
		if(change)
			cout << n2 << " " << n1 << " " << Max << endl;
		else
			cout << n1 << " " << n2 << " " << Max <<endl;
	}
	return 0;
}
