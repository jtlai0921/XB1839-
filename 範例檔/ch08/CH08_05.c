#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct club
    {
        char name[3][10];
        char title[10];
        int age;
    }; /* �w�q���c ,���c�����}�C��Ʀ���*/ 

    struct club member_name[3]=
    {{"�i���","���ө�","�����","�Ѫ궤",25},
     {"���w��","���A��","�j����","���ඤ",32},
     {"�i�ꩾ","���v�j","���ص�","���Z��",46}};
    /* �w�q�ó]�w���c�}�C��l�� */ 
    int i;
  
    for(i=0;i<3;i++)
    printf("%s \t",member_name[i].title);
    printf("\n--------------------------------\n");
   
    for(i=0;i<3;i++)
    {
        printf("%s\t %s\t %s",member_name[i].name[0],member_name[i].name[1],member_name[i].name[2]);
        printf("\n");
    }/* ��X�C�@��club���}�C�����m�W�r�� */
    printf("--------------------------------\n");
   
    return 0;
}

