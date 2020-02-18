#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Str1[6]="Hello"; 
    char Str2[6]={ 'H', 'e', 'l', 'l', 'o','\0'};
    char Str3[ ]="Hello";
    /*以上都可視為字串的宣告*/ 
    char Str4[ ]={ 'H', 'e', 'l', 'l', 'o'};
    /*Str4只是字元陣列*/    
    
    printf("Str1 佔用空間:%d 位元 字串Str1 的內容:%s\n", sizeof(Str1),Str1);  
    printf("Str2 佔用空間:%d 位元 字串Str_2 的內容:%s\n", sizeof(Str2),Str2);  
    printf("Str3 佔用空間:%d 位元 字串Str_3 的內容:%s\n", sizeof(Str3),Str3);  
    printf("Str4 佔用空間:%d 位元 字串Str_4 的內容:%s\n", sizeof(Str4),Str4);
    /*輸出字串與字元陣列的空間與內容*/ 
    
    return 0;
}

