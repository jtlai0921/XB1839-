#include <stdio.h>
#include <stdlib.h>

struct club
{
    char name[3][10];
    char title[10];
    int age;
}; /* �w�q���c ,�o��club���c������ʪ����c���A*/ 

void show(struct club);/* ���c�ܼƶǭȩI�s��ƭ쫬�ŧi */ 

int main(void)
{
   
    struct club m1={"�i���","���ө�","�����","�Ѫ궤",25};
    /* �w�q�ó]�w���c�}�C��l�� */ 
    show(m1);/* �I�s��� */ 

    return 0;
}

void show(struct club s)/* �w�qshow()��� */ 
{
    printf("%s \t",s.title);
    printf("%s\t %s\t %s",s.name[0],s.name[1],s.name[2]);
    printf("\n");
    /* ��X�����m�W�r�� */
    printf("--------------------------------\n");
}

