#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int i,arr[6]={12,16,35,65,52,99};
    int *ptr;
 
    ptr = arr;/* 使用指標變數指向陣列常數 */ 
     
    for ( i = 0; i < 6; i++ )
    {
        printf( "arr[%d]=%d\t", i,arr[i]);
        printf( "arr+%d=%p\t", i,arr+i);/* 輸出arr+i的值 */ 
        printf( "*(ptr+%d)=%d\t", i,*(ptr+i));
        printf( "ptr+%d=%p\n", i,ptr);/* 輸出ptr+i的值 */ 
    }  /*輸出陣列元素的值與位址*/ 

    return 0;
}

