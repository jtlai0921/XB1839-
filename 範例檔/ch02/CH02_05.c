#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int Num=100;      /* 以10進位設定整數變數 */
    int OctNum=0200;  /* 以8進位設定短整數變數 */
    int HexNum=0x33f; /* 以16進位設定整數變數 */
    
    printf("Num=%d\n",Num);  /* 以10進位輸出 */ 
    printf("OctNum=%o\n",OctNum);  /* 以8進位輸出 */
    printf("HexNum=%x\n",HexNum);  /* 以16進位輸出 */
      
    return 0;
}

