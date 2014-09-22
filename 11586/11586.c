#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    int t;
    char str[200];
    cin >> t;
        getchar();
        while(t--){
            gets(str);
            int len = strlen(str), M = 0, F = 0;
            for(int i = 0; i < len; i++){
                if(str[i] == 'M')   M++;
                if(str[i] == 'F')   F++;
            }
            puts(M == F && M != 1?"LOOP":"NO LOOP");
        }
    return 0;
}
