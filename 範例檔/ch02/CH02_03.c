#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159  /*以巨集指令#define 宣告PI為3.14159*/ 

int main()
{	
     	
    const int radius =10 ; /*const 宣告與設定圓半徑常數 */ 	
    	   
    printf("圓的半徑為=%d ,面積為=%f \n",radius,radius*radius*PI);
    /* 輸出圓半徑與計算圓面積 */		
    
    return 0;
} 

