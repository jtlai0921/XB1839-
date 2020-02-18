#include <stdio.h>
#include <stdlib.h>

void CallByValue(int x);
void CallByAddress(int *x);

int main(void)
{
    int x = 10;

    printf( "傳值呼叫前：%d\n", x );
    CallByValue(x);
    printf( "傳值呼叫後：%d\n", x );
    CallByAddress(&x);
    printf( "傳址呼叫後：%d\n", x );

    return 0;
}

/* 無意義的函數，純綷示範傳值呼叫 */
void CallByValue(int x)
{
    x = 20;
}
 
/* 無意義的函數，純綷示範傳址呼叫 */
void CallByAddress(int *x)
{
    *x = 30;
}

