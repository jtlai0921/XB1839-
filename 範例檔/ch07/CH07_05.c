#include <stdio.h>
#include <stdlib.h>

int* get_pointer_value();  /* 示範如何傳回指標值 */
 
int main(void)
{
    int *ptr;
    ptr = get_pointer_value ();
    /* 傳回指標的函數 */ 
    printf( "*ptr=%d\n", *ptr );
    
    return 0;
}
 
/* 讓使用者輸入整數 */
/* 傳回指標值       */
int* get_pointer_value ()
{
    int *x;
    int input;
    x = &input;
    printf( "請輸入一個整數：" );
    scanf( "%d",&input );
    printf( "*x=%d\n",*x );
 
    return x;
}

