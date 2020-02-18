#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* 宣告整數變數no與浮點數變數fno */ 
    int no=523;
    float fno=13.4567;
    
    printf("%4d\n",no);/*以% 4d輸出*/ 
    printf("%-4d\n",no);/*以%-4d輸出*/ 
    printf("%6.3f\n",fno);/*以6.3f格式輸出*/ 
    
    return 0;
}

