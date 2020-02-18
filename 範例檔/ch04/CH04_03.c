#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
    int degree,pay;
   
    printf("請輸入電量度數:");
    scanf("%d",&degree); 
   
    if(degree>=1 && degree<=20)
        pay=10*degree;
    else if (degree>=21 && degree<=60)   
        pay=12.5*degree;
    else if (degree>=61 && degree<=80) 
        pay=18*degree;
    else if (degree>=81)
        pay=22*degree;/* if else 指令來計算電費 */ 
    printf("本月用電有%d度,電費要%d元\n",degree,pay); 
    
   return 0;
}

