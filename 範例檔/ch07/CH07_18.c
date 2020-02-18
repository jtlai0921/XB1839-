#include <stdio.h> 
#include <stdlib.h>   
#include <string.h>    

int main(void)  
{  
    char* fruit[5] = {"apple","orange","watermelon",
            "strawberry","pineapple"}; /* 水果名稱 */ 
    int i,price[5] = {20,15,55,30,30};  /* 價格資料 */
    char favo[20];  
    printf("歡迎光臨！榮欽水果專賣店\n");  
    printf("===============================\n");  
    printf("[apple], [orange], [watermelon]\n");  
    printf("[strawberry], [pineapple]\n\n"); 
    printf("請問您想買哪一種水果？ ");  
    scanf("%s",favo);     /* 取得使用者輸入的字串  */
    for(i=0;i<5;i++)  
    {  
        if(strcmp(fruit[i],favo) == 0)  
        /* 進行字串比較 ,如果字串相同就輸出相對應的價格資料  */
            printf("%s一斤是%d元\n",favo,price[i]);    
    }     
    
    return 0;
}

