#include<stdio.h>
#include<string.h>

int LCS[1005][1005] = {0};
int main()
{
    char s1[1005], s2[1005];
    while( gets(s1) ){
        gets(s2);
        memset( LCS, 0, sizeof(LCS) );
        int s1_length = strlen(s1);
        int s2_length = strlen(s2);
        int i, j;
        for( i = 1 ; i <= s1_length ; i++ )
            for( j = 1 ; j <= s2_length ; j++ )
                if( s1[i-1] == s2[j-1] )
                    LCS[i][j] = LCS[i-1][j-1]+1;
                else
                    LCS[i][j] = ( LCS[i-1][j] > LCS[i][j-1] )? LCS[i-1][j] : LCS[i][j-1];
        printf( "%d\n", LCS[s1_length][s2_length] );
    }
    return 0;
}
