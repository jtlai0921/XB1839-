#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int Eng;
    int Chi;
    int Math;
}; /* �w�q���c ,�o��student���c������ʪ����c���A*/ 

void calculate(struct student);/* ���c�ܼƶǭȩI�s��ƭ쫬�ŧi */ 

int main(void)
{
   
    struct student stud={"�L����",80,60,97};
    /* �w�q�ó]�w���c��l�� */ 
    calculate(stud);/* �I�s��� */ 
    printf("-----------------------------------------------\n");
    printf("%s ����l���Z �^��:%d ���:%d �ƾ�:%d\n",stud.name,stud.Eng,stud.Chi,stud.Math);       
    printf("-----------------------------------------------\n");
    
    return 0;
}

void calculate(struct student s1)/* �w�qcalculate()��� */ 
{
    s1.Eng=s1.Eng*1;
    s1.Chi=s1.Chi*1.3;
    s1.Math=s1.Math*1; 
    /* ��X�����m�W�r��ΦU�즨�Z */
    printf("--------------------------------------------\n");
    printf("%s ���[���p�����Z �^��:%d ���:%d �ƾ�:%d\n",s1.name,s1.Eng,s1.Chi,s1.Math);    
}

