/*條件運算子練習*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int math, physical; /*宣告兩科目的分數*/
    char chr_pass;      /*宣告表示合格的字元變數*/
 
    math=85;
    physical=57;
 
    printf("數學 = %d 分與 物理 = %d \n",math,physical);
    (math >= 60 && physical >= 60 )? (chr_pass='Y'):(chr_pass='N');
    /*印出chr_pass變數內容，顯示該考生是否合格*/
    printf( "該名考生是否合格？ %c\n", chr_pass );  
   
    math=65;
    physical=77;
    printf("數學 = %d 分與 物理 = %d \n",math,physical);
    chr_pass = ( math >= 60 && physical >= 60 )?'Y':'N';
    printf( "該名考生是否合格？ %c\n", chr_pass );
    
    return 0; 
 }

