#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
    int A[2][2][2]={{{1,2},{5,6}},{{3,4},{7,8}}};
 
    int i,j,k;
		
    for(i=0;i<2;i++) /* �~�h�j�� */
        for(j=0;j<2;j++) /* ���h�j�� */
            for(k=0;k<2;k++) /* ���h�j�� */
                printf("A[%d][%d][%d]=%d\n",i,j,k,A[i][j][k]);
                /* �C�X�T���}�C��������  */ 
            
    return 0;
}

