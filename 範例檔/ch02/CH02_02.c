#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int my_variable=100; /*�ŧi my_variable����ƫ��A*/ 
    
    /* �i�H���[�A�� */
    printf( "my_variable����ƪ��� = %d�줸��\n",sizeof my_variable);  
    /* �����[�W�A�� */                  
    printf( "��ƫ��A����ƪ��� = %d�줸��\n",sizeof(int));  
	                    
    return 0;
}  

