#include<stdio.h>

int main()
{
    int prime[1005] = { 1, 0};
    int prime_count[1005] = {0, 1};
    int count = 1;
    int i, j;
    for( i = 2 ; i <= 1000 ; i++ ){
        if( !prime[i] ){
            count++;
            for( j = i+i ; j <= 1000 ; j += i )
            prime[j] = 1;
        }
        prime_count[i] = count;
    }

    int N, C;
    while( scanf( "%d%d", &N, &C ) != EOF ){
        int start, end;
        if( !( prime_count[N] % 2 ) ){
            start = prime_count[N]/2 - C + 1;
            if( start < 1 )
            start = 1;
            end = prime_count[N]/2 + C;
            if( end > prime_count[N] )
            end = prime_count[N];
        }
    else{
        start = (prime_count[N]/2 + 1) - C + 1;
        if( start < 1 )
            start = 1;
        end = (prime_count[N]/2 + 1) + C - 1;
        if( end > prime_count[N] )
            end = prime_count[N];
    }

    printf( "%d %d:", N, C );
    count = 0;
    for( i = 1 ; i <= N ; i++ ){
        if( !prime[i] ){
            count++;
            if( count <= end && count >= start )
            printf( " %d", i );
        }
    }
    printf( "\n\n" );
    }
    return 0;
}
