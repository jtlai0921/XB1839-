#include <stdio.h>
#include <stdlib.h>

float cubic_abs(float o1);/* ���cubic_abs()���쫬�ŧi */ 
float f_abs(float);/* ���f_abs()���쫬�ŧi */
		
int main(void)
{
    float f1;

    printf("�п�J�@���:"); /* ��J��� */
    scanf("%f",&f1);
    printf("f_abs(%f)=%.2f\n",f1,f_abs(f1)); /* �L�X����� */
    printf("cubic_abs(%f)=%.2f\n",f1,cubic_abs(f1)); 
   
    return 0;
}

float cubic_abs(float o1)
{  
    return f_abs(o1*o1*o1);
}

float f_abs(float o) /* �ۭq���f_abs()�Ǧ^����� */
{
    if (o<0)
        return -1*o;
    else
        return o;
}

