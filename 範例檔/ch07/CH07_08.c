#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int a1=999;
    int *ptr1,**ptr2;
    int ***ptr3;
	
    ptr1=&a1; /* ptr1�O���Va1������ */
    ptr2=&ptr1;/* ptr2�O���Vptr1������ */
    ptr3=&ptr2;/* ptr3�O���Vptr2������ */ 
	
    printf("�ܼ� a1 ����}:%p�A���e:%d\n",&a1,a1);
    printf("�ܼ� ptr1 ����}:%p�Aptr1�����e:%p�A*ptr1�G%d\n",&ptr1,ptr1,*ptr1);
    printf("�ܼ� ptr2 ����}:%p�Aptr2�����e:%p�A**ptr2�G%d\n",&ptr2,ptr2,**ptr2);
    printf("�ܼ� ptr3 ����}:%p�Aptr3�����e:%p�A***ptr3�G%d\n",&ptr3,ptr3,***ptr3);
	
    return 0;
}

