#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
    /*宣告變數*/
    float c, f;
    
    printf("請輸入攝氏溫度：");
    scanf("%f",&c);/* 自行輸入溫度 */ 
    
    f=(9*c)/5+32;	/* 華氏與攝氏溫度轉換公式 */ 
    printf("攝氏%.1f度 = 華氏%.1f度\n",c,f);

    return 0;
}

