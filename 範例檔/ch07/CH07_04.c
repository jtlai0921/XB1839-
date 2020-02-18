#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    int *ptr;
 
    ptr = &input;  /* 初始指標變數 */
    printf( "請輸入一個整數：" );
    scanf( "%d", &input);
    *ptr = *ptr * *ptr * *ptr;  /* 進行立方運算，並將結果存回 */
    printf( "*ptr=%d input=%d\n",*ptr,input );
 
    return 0;
}

