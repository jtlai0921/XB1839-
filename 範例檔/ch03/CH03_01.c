#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int num,hundred; /* �ŧi��Ӿ���ܼ� */ 
    printf("�п�J���@�Ӿ��:");
    scanf("%d",&num); /* ���N��J�@�Ӿ�� */ 
 
    hundred=(num/100)%10; /* �D�P10���l�ƭ� */ 
    printf("%d�ʦ�ƪ��Ʀr��%d\n",num,hundred); 
    /* ��X��Ӿ�ƻP�ʦ�ƼƦr */  
    return 0; 
}

