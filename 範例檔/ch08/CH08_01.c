#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void)
{
    struct student
    {
        char name[10];
        int score;
        int ID;
    } s1,s2; /* �ŧistudent���c��s1,s2�ܼ� */ 
     
    float total,average;
     
    strcpy(s1.name, "Justin");/* �]�ws1.name��l�� */ 
    s1.score = 90;
    s1.ID=10001;
    printf("�Ĥ@�Ӿǥͪ��m�W=%s ���Z=%d �Ǹ�=%d \n", s1.name,s1.score,s1.ID);
    printf("�п�J�ĤG�Ӿǥͪ��m�W:");
    gets(s2.name);/* ��Js2.name��l�� */ 
    printf("�п�J�ĤG�Ӿǥͪ����Z�P�Ǹ�:");
    scanf("%d %d",&s2.score,&s2.ID);/* ��Js2����L��Ʀ��� */ 
    printf("�ĤG�Ӿǥͪ��m�W=%s ���Z=%d �Ǹ�=%d \n",  s2.name,s2.score,s2.ID);
    
    total=s1.score+s2.score;/* �p���`�� */ 
    average=total/2;  /* �p�⥭�� */ 
    printf("=================================================\n");
    printf("���ǥ��`��:%f ���ǥͥ���:%f\n",total,average);
    
    return 0;
}

