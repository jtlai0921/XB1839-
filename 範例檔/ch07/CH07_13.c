#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int i,j,arr[3][4]={12,16,35,65,152,23,8,15,71,4,2,9};
    int *ptr;
 
    ptr = &arr[0][0];/* �ϥΫ����ܼƫ��V�}�C�_�l��} */ 
     
    for ( i = 0; i < 3; i++ )
        for ( j= 0; j < 4; j++ )
        {
            printf("arr[%d][%d]=%d\n",i,j,*(ptr+i*4+j)); 
            /*�H�����ܼƨӶ����D���}�C������ */ 
        }

    return 0;
}

