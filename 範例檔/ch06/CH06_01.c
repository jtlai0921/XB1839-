#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Score[5]={ 87,56,90,65,80 };    
    /* �w�q��ư}�C Score[5],�ó]�w5�����Z */
    int count, Total=0;
    for (count=0; count < 5; count++) /* ���� for �j��Ū���ǥͦ��Z */
    {
        printf("�� %d ��ǥͪ�����:%d\n", count+1,Score[count]);  
        Total+=Score[count];  /* �Ѱ}�C��Ū�����ƭp���`�X */
    }
    printf("-------------------------\n");
    printf("5��ǥͪ��`��:%d\n", Total);  
    /* ��X���Z�`�� */
    printf("-------------------------\n");
     
    return 0;
}

