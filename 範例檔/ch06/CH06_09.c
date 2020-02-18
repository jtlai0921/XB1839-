#include <stdio.h>
#include <stdlib.h>
#define length 40

void string_copy(char arr1[],char arr2[]);/* 拷貝函數原型宣告 */ 

int main(void)
{
    char Str1[length]; /* 定義字元陣列 Str1[40] */
    char Str2[length]; /* 定義字元陣列 Str2[40] */
     
    printf("請輸入準備拷貝的字串:"); 
    scanf("%s",Str1);/* 輸入字串 */ 
    string_copy(Str1,Str2);/* 呼叫函數 */ 
    printf("拷貝後的字串:%s\n",Str2);
     
    return 0;
}

void string_copy(char arr1[],char arr2[])
{
    int i;
    for(i=0;i<length;i++)
        arr2[i]=arr1[i];/* 逐一拷貝字元 */  
}

