#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {
        char name[10];
        int math;
        int english;
    }; /* �w�q���c */ 

    struct student class1[3]=
        {{"Helln",87,79},{"Wilson",77,100},{"Kevin",78,90}};
    /* �w�q�ó]�w���c�}�C��l�� */ 
    int i;
    float math_Ave=0,english_Ave=0;
   
    for(i=0;i<3;i++)
    {
        math_Ave=math_Ave+class1[i].math;/* �p��ƾ��`�� */ 
        english_Ave=english_Ave+class1[i].english;/* �p��^���`�� */ 
        printf("�m�W:%s\t�ƾǦ��Z:%d\t�^�妨�n:%d\n",class1[i].name,
        class1[i].math,
        class1[i].english); 
    }
    printf("--------------------------------------------\n");
    printf("�ƾǥ�������:%4.2f  �^�奭������:%4.2f\n",math_Ave/3,
    english_Ave/3);
   
    return 0;
}

