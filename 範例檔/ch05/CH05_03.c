#include <stdio.h>
#include <stdlib.h>
/* x ������ ,y ������ */
 
float Pow( float x, int y )
{
    float p = 1;
    int i;
    for( i = 1; i <= y; i++ )
        p *= x;
    
    return p;
 }

int main(void)
{
    float x;
    int y;

    printf( "�п�J����B��]ex.2^3�^�G" );
    scanf( "%f^%d", &x, &y );
    printf( "����B�⵲�G�G%.4f\n", Pow(x, y) );
    /*��X�P�I�sPow()���*/ 

    return 0;
}

