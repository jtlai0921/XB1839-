#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
    int A[2][2][2]={{{1,2},{5,6}},{{3,4},{7,8}}};
 
    int i,j,k;
		
    for(i=0;i<2;i++) /* 外層迴圈 */
        for(j=0;j<2;j++) /* 中層迴圈 */
            for(k=0;k<2;k++) /* 內層迴圈 */
                printf("A[%d][%d][%d]=%d\n",i,j,k,A[i][j][k]);
                /* 列出三維陣列中的元素  */ 
            
    return 0;
}

