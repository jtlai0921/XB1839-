#include <stdio.h>
#include <stdlib.h>
/* x 為底數 ,y 為指數 */
 
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

    printf( "請輸入次方運算（ex.2^3）：" );
    scanf( "%f^%d", &x, &y );
    printf( "次方運算結果：%.4f\n", Pow(x, y) );
    /*輸出與呼叫Pow()函數*/ 

    return 0;
}

