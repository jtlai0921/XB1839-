#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     
    char c1='\a'; /* 以跳脫字元來設值 */ 
    char c2=7;    /* 以10進位來設值 */ 
    char c3='\7'; /* 以8進位來設值 */ 
    char c4='\x7';/* 以16進位來設值 */ 
         
    printf("%c%c%c%c\n",c1,c2,c3,c4); /* 輸出四聲嗶聲*/ 
        
    return 0;
}

