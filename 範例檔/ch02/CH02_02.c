#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int my_variable=100; /*宣告 my_variable為整數型態*/ 
    
    /* 可以不加括號 */
    printf( "my_variable的資料長度 = %d位元組\n",sizeof my_variable);  
    /* 必須加上括號 */                  
    printf( "整數型態的資料長度 = %d位元組\n",sizeof(int));  
	                    
    return 0;
}  

