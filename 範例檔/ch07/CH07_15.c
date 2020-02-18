#include <stdio.h>
#include <stdlib.h>

void toUpper(char*);  /* 字串轉大寫 */
void toLower(char*);  /* 字串轉小寫 */
 
int main(void)
{
    char str[80];/* 以陣列字元宣告字串 */ 

    printf( "請輸入一英文字串：" );
    scanf( "%s", str );
    toUpper(str);
    printf( "字串轉大寫： %s\n", str );
    toLower(str);
    printf( "字串轉小寫： %s\n", str );
    
    return 0;
}
 
/* 引數：傳遞字串   */
/* 結果：小寫轉大寫 */
void toUpper( char *str )/* 以指標變數接收參數字串 */ 
{
    int i = 0;
    int length;
    /* 計算陣列長度 */
    while ( str[i]!= '\0' )
        i++;
    length = i;
 
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 96 && *(str+i) < 123 )
            *(str+i) = *(str+i) - 32;
}

/* 引數：傳遞字串 */
/* 結果：大寫轉小寫 */
void toLower( char *str )
{
    int i = 0;
    int length;
 
    /* 計算陣列長度 */
    while ( str[i] != '\0' )
        i++;
    length = i;
 
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 64 && *(str+i) < 91 )
            *(str+i) = *(str+i) + 32;
}

