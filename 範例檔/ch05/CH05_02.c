#include<stdio.h>
#include<stdlib.h>

int sum(int,int);/*宣告函數原型*/

int main(void)
{
 
    int x,y;
  
    printf("請輸入兩個數字:");
    /*輸入數字*/
    scanf("%d %d",&x,&y);
    /*在程式敘述中呼叫函數*/
    printf("%d+%d=%d\n",x,y,sum(x,y));
  
    return 0 ;
}
/*函數主體定義*/
int sum(int score1,int score2)
{   
    int total;
    total=score1+score2;
    
    return total; /*傳回兩者和的整數 */ 
}

