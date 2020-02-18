#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    float f1=456.78F;       /*以單精度型態宣告,數值後方加上F*/
    double f2=123.90123;    /*以 倍精度型態宣告 */
    
    printf("f1=%f\n",f1);   /*以浮點數格式輸出*/
    printf("f1=%e\n",f1);   /*以科學符號格式輸出*/
    printf("f2=%f\n",f2);   /*以一般浮點數格式輸出*/ 
    printf("f2=%e\n",f2);   /*以科學符號格式輸出*/
    
    return 0;
}

