#include<stdio.h>
#include <stdlib.h>

void replace(char *,int,char);   /* 宣告replace()函數的原型 */

int main(void)
{
   char str[25];
   char ch;
   int i;
   
   printf("請輸入一字串:");
   gets(str); 
   printf("請輸入打算置換的字元位置與字元 ex:i ch ");
   scanf("%d %c",&i,&ch); /* 輸入打算置換的字元位置與字元 */
   replace(str,i,ch);			/* 呼叫函數replace() */
   printf("置換後字串的內容為");
   printf("%s\n",str);
   printf("\n");
      
   
   return 0;
}

void replace(char *ptr,int n,char ch)
{
   *(ptr+n-1)=ch;      /* 將陣列第n個元素設值為ch*/
}

