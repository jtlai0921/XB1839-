#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    int *ptr;
 
    ptr = &input;  /* ��l�����ܼ� */
    printf( "�п�J�@�Ӿ�ơG" );
    scanf( "%d", &input);
    *ptr = *ptr * *ptr * *ptr;  /* �i��ߤ�B��A�ñN���G�s�^ */
    printf( "*ptr=%d input=%d\n",*ptr,input );
 
    return 0;
}

