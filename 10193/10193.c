#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

char str1[31], str2[31];

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int parse(char *str) {
    int len = strlen(str);
    int sum = 0;
    for(int i = 0; i < len; i ++) {
        sum += (str[i] - '0') * pow(2, len - i - 1);
    }
    return sum;
}

int main()
{
    int cases;
    scanf("%d",&cases);
    for(int curCase=1;curCase<=cases;curCase++){
        int dec1,dec2;
        scanf("%s%s",str1,str2);
        dec1=parse(str1);
        dec2=parse(str2);
        if(dec1<dec2) swap(dec1,dec2);
        if(gcd(dec1, dec2)!=1)
            printf("Pair #%d: All you need is love!\n",curCase);
        else
            printf("Pair #%d: Love is not all you need!\n",curCase);
    }
    return 0;
}
