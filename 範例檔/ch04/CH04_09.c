#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h=30,day=0;	
    do   /*do-while�j��}�l*/
    {                                 
        day++;    /*�Ѽ�*/
        if(h-=3)  /*�C����@���j�鰪�״��3����(h=h-3)*/
            h++;  /*�[�^1����(h=h+1)*/
    } while(h>0); /*�j�馨�ߪ����󬰰��פj��0*/
    printf("�����ݭn %d ��\n", day); /*�L�X�Ѽ�*/
   
    return 0;
}  

