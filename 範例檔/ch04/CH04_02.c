#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=0;	 /*�ŧi�r���ܼ�*/
    printf("�п�J�@�ӥ���Ʀr:");
    scanf("%d", &num);     /*��J�ƭ�*/ 
    if(num%2)	   /*�p�G��ư��H2���l�Ƶ���0*/
        printf("��J���Ƭ��_�ơC\n");    /*�h��ܩ_��"*/
    else                 /*�_�h*/
        printf("��J���Ƭ����ơC\n");    /*�h��X����"*/
      
    return 0;
}

