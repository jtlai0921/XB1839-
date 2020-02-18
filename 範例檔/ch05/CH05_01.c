#include <stdio.h>
#include <stdlib.h>

float cubic_abs(float o1);/* 函數cubic_abs()的原型宣告 */ 
float f_abs(float);/* 函數f_abs()的原型宣告 */
		
int main(void)
{
    float f1;

    printf("請輸入一實數:"); /* 輸入實數 */
    scanf("%f",&f1);
    printf("f_abs(%f)=%.2f\n",f1,f_abs(f1)); /* 印出絕對值 */
    printf("cubic_abs(%f)=%.2f\n",f1,cubic_abs(f1)); 
   
    return 0;
}

float cubic_abs(float o1)
{  
    return f_abs(o1*o1*o1);
}

float f_abs(float o) /* 自訂函數f_abs()傳回絕對值 */
{
    if (o<0)
        return -1*o;
    else
        return o;
}

