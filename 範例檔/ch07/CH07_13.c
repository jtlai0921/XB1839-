#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int i,j,arr[3][4]={12,16,35,65,152,23,8,15,71,4,2,9};
    int *ptr;
 
    ptr = &arr[0][0];/* 使用指標變數指向陣列起始位址 */ 
     
    for ( i = 0; i < 3; i++ )
        for ( j= 0; j < 4; j++ )
        {
            printf("arr[%d][%d]=%d\n",i,j,*(ptr+i*4+j)); 
            /*以指標變數來間接求取陣列元素值 */ 
        }

    return 0;
}

