#include <stdio.h>
#include <stdlib.h>

float square(float);/* 函數原型宣告 */ 

int main(void)
{  
    float x;
   
    printf("請輸入x值:"); 
    scanf("%f",&x);
    printf("%.1f^2=%.1f\n",x,square(x));/* 呼叫square()函數 */ 
      
    return 0;
}

float square(float x) /* 定義square()函數 */ 
{
    return x*x; 
}

