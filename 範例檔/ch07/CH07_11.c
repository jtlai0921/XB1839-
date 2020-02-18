#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int i,j,no[2][4]={312,16,35,65,52,111,77,80};
     
    for (i = 0; i < 2; i++ )
        for ( j = 0; j < 4; j++ )
            printf( "&no[%d][%d]=%p\t *(no+%d)+%d=%p\n",
                    i,j,&no[i][j],i,j,*(no+i)+j);
            /* 輸出二維陣列的元素位址與利用指標表示陣列元素位址*/ 
        
    return 0;
}

