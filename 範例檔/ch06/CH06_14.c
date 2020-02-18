#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int length;/*用作計算字串的長度*/
    char str[30];
	
    printf("請輸入字串:");
    /*輸入字串*/
    scanf("%s",str);
    printf("輸入的字串為:%s\n",str);
    length=0;
    while (str[length]!='\0')
        length++; 
    printf("此字串有%d個字元\n",length);
       
    return 0;
}

