#include<stdio.h>
#include <stdlib.h>

int main()
{	
    long int no1=123456UL;/*�ŧi�����*/
    unsigned short no2=9786;/*�ŧi�L���u���*/
    int no3=5678; /*�ŧi���*/
 	   
    /* ��X�U�ؾ���ܼƻP�Ҧ��줸�� */ 
    printf("����Ƭ�: %d  ���F %d �줸��\n",no1,sizeof no1);
    printf("�L������Ƭ�: %d  ���F %d �줸��\n",no2,sizeof no2);
    printf("��Ƭ�: %d  ���F %d �줸��\n",no3,sizeof no3);
	
    return 0;
}

