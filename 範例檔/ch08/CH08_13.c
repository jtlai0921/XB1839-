#include <stdio.h>
#include <stdlib.h>

int encode(int); /*�[�K���*/ 
int decode(int); /*�ѱK��� */
	
int main(void)
{
    int pwd;
    printf("�п�J�K�X�G");
    scanf("%d",&pwd);
    pwd = encode(pwd);
    printf("�[�K��G%d\n",pwd);
    pwd = decode(pwd);
    printf("�ѱK��G%d\n",pwd);
	    
    return 0;
}
/*��  �ơG���[�K���K�X*/ 
/*�Ǧ^�ȡG�[�K�᪺�K�X*/ 
int encode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] += 32;
    return u1.num;
}
/*��  ��: �[�K�L���K�X*/
/*�Ǧ^��: �٭�᪺�K�X*/ 
int decode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] -= 32;
    return u1.num;
}

