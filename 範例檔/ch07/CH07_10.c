#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int i,arr[6]={12,16,35,65,52,99};
    int *ptr;
 
    ptr = arr;/* �ϥΫ����ܼƫ��V�}�C�`�� */ 
     
    for ( i = 0; i < 6; i++ )
    {
        printf( "arr[%d]=%d\t", i,arr[i]);
        printf( "arr+%d=%p\t", i,arr+i);/* ��Xarr+i���� */ 
        printf( "*(ptr+%d)=%d\t", i,*(ptr+i));
        printf( "ptr+%d=%p\n", i,ptr);/* ��Xptr+i���� */ 
    }  /*��X�}�C�������ȻP��}*/ 

    return 0;
}

