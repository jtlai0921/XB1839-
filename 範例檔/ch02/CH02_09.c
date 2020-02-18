#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i=120,j=33;  /* 定義整數變數 i 與 j */
    float Result;    /* 定義浮點數變數 Result */
    
    Result=i/j;
    printf("Result=i/j=%d/%d=%f\n\n", i, j, Result);
    printf("強制型態轉換的執行結果\n");
    Result=(float)i /(float) j; 
    printf("Result=(float)i/(float)j=%d/%d=%f\n", i, j, Result);
     
    return 0;
}

