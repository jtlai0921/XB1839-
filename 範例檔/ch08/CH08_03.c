#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct name
    {
        char firstname[10];
        char lastname[10];
    }; /* �w�q���cname */
   
    struct member /* �w�q�_�����c member */
    {
        struct name member_name;
        char ID[10];
        int salary;
    } m1={ {"Helen","Wang"},"E121654321",35000};
    /* �]�w���c�ܼ�m1����� */
   
    printf("------------------------------------------\n");
    printf("�|���m�W: %s%s\n",m1.member_name.lastname,
    m1.member_name.firstname);  
    printf("�����Ҹ��X:%s\n",m1.ID);
    printf("�|���~��:%d\n",m1.salary);
    printf("------------------------------------------\n");
   
    return 0;
}

