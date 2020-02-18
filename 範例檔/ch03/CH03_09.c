#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=6870,hundred,fifty,ten;
    
    hundred=num/100;
    fifty=(num-hundred*100)/50;
    ten=(num-hundred*100-fifty*50)/10;
    /*利用簡單的四則運算*/ 
    printf("百元紙鈔有%d張 五十元硬幣有%d個 十元鈔硬幣有%d個\n"
            ,hundred,fifty,ten); 
       
    return 0; 
}

