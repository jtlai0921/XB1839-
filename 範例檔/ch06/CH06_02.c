#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int Tel_fee[3][2]={ 2227317,1430,2253227,2850,2232081,4580 };  
    /* �w�q�P�ŧi��ƤG���}�C  */
     
    printf("--�q�ܸ��X�P�O�Ω��Ӫ�--\n");
    for(i=0;i<3;i++)
    {
        printf("%d       %d��\n",Tel_fee[i][0],Tel_fee[i][1]);
        printf("-------------------------------------\n");
    }
    /* ��X�q�ܸ����P�O�� */ 
      
    return 0;
}

