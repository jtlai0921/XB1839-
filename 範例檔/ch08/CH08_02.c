#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    struct
    {
        char name[10];
        int score;
        int ID;
    } s1={ "Justin",90,10001};/* ���w�q���c���A,�o�ŧi���c�ܼ� */
    /* �]�w���c�ܼƦ�����,�����H�j�A���A�� */ 
    printf("s1.name = %s\n", s1.name);
    printf("s1.score = %d\n", s1.score);
    printf("s1.ID = %d\n", s1.ID);
     
    return 0;
}

