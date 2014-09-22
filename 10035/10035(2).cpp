#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int N1, N2;
    while( scanf( "%d%d", &N1, &N2 ) != EOF && !( N1 == 0 && N2 == 0 ) )
    {
        int temp = 0;
        int carry = 0;
        while( N1 || N2 )
        {
            temp = (N1 % 10) + (N2 % 10) + temp;
            temp /= 10;
            if( temp )
                carry++;
            N1 /= 10;
            N2 /= 10;      
        }
        
        if( carry == 0 )
            printf( "No carry operation.\n" );
        else if( carry == 1 ) 
            printf( "1 carry operation.\n" );
        else
            printf( "%d carry operations.\n", carry );
    }
    return 0;
	
	return 0;
}
