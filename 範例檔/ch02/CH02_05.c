#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int Num=100;      /* �H10�i��]�w����ܼ� */
    int OctNum=0200;  /* �H8�i��]�w�u����ܼ� */
    int HexNum=0x33f; /* �H16�i��]�w����ܼ� */
    
    printf("Num=%d\n",Num);  /* �H10�i���X */ 
    printf("OctNum=%o\n",OctNum);  /* �H8�i���X */
    printf("HexNum=%x\n",HexNum);  /* �H16�i���X */
      
    return 0;
}

