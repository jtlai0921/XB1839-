#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    
    printf("請輸入任一整數:"); 
    scanf("%d",&n);
    
    printf("反向輸出的結果:"); 
    
    while (n!=0) /* while迴圈 */ 
    {
        printf("%d",n%10);/* 求出餘數值 */ 
        n/=10;
    }    
    printf("\n");
     
    return 0; 
}

