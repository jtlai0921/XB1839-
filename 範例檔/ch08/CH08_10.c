#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER;/* 把int定義成INTEGER */ 
typedef char* STRING;/* 把char*定義成STRING */ 

int main(void)
{    
    INTEGER score=12345;/* 宣告score是 INTEGER型態 */ 
    STRING s1="我是張大大";/* 宣告s1是STRING型態 */ 
      
    printf("s1=%s \t score=%d\n",s1,score);
     
    return 0;
}

