#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 100;
    int *address1;

    address1 = &num1;
    printf( "num1的儲存值      ：%d\n", num1 );
    printf( "num1的記憶體位址  ：%p\n", &num1 );
    /*利用&運算子取出位址*/ 
    printf( "address的儲存值   ：%p\n", address1);
    printf( "*address的儲存值   ：%d\n", *address1);
    printf( "address記憶體位址 ：%p\n", &address1);
    /* 輸出指標變數的位址 */ 
    
    return 0;
}

