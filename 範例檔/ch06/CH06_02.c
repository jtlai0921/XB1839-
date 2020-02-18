#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int Tel_fee[3][2]={ 2227317,1430,2253227,2850,2232081,4580 };  
    /* 定義與宣告整數二維陣列  */
     
    printf("--電話號碼與費用明細表--\n");
    for(i=0;i<3;i++)
    {
        printf("%d       %d元\n",Tel_fee[i][0],Tel_fee[i][1]);
        printf("-------------------------------------\n");
    }
    /* 輸出電話號瑪與費用 */ 
      
    return 0;
}

