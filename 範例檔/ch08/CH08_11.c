#include <stdio.h>
#include <stdlib.h>

struct student1
{
    char name[10];/* ��10bytes �Ŷ� */
    int score; /* �� 4bytes �Ŷ� */
}; /* �ŧi���c���A */ 
 
union student
{
    char name[10];/* ��10bytes �Ŷ� */
    int score;/* �� 4bytes �Ŷ� */
}; /* �ŧi�p�X���A */ 

int main(void)
{
    struct student1 s1;/* s1�����c�ܼ� */ 
    union student s; /* s���p�X�ܼ� */ 
     
    printf("���c�ܼ�s1=%d�줸�� �p�X�ܼ�s=%d�줸��\n",sizeof(s1),sizeof(s));
     
    return 0;
}

