#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char ch1=67;     /*以10進位ASCII碼設定字元變數*/
    char ch2='r';    /*以字元設定字元變數*/ 
    char ch3='\111'; /*以8進位ASCII碼設定字元變數*/
    char ch4='\x61'; /*以16進位ASCII碼設定字元變數*/
    char ch5=0111;
    char ch6=0x61;
    
    /* 輸出字元變數的字元值 */ 
    printf("char1=%c\n",ch1);
    printf("char2=%c\n",ch2);
    printf("char3=%c\n",ch3);
    printf("char4=%c\n",ch4);
    printf("char5=%c\n",ch5);
    printf("char6=%c\n",ch6);
    
    
    /* 輸出字元變數的ASCII碼 */ 
    printf("char1=%d\n",ch1);
    printf("char2=%d\n",ch2);
    printf("char3=%d\n",ch3);
    printf("char4=%d\n",ch4);
    printf("char5=%d\n",ch5);
    printf("char6=%d\n",ch6);
    
    return 0;
}

