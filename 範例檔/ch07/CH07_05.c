#include <stdio.h>
#include <stdlib.h>

int* get_pointer_value();  /* �ܽd�p��Ǧ^���Э� */
 
int main(void)
{
    int *ptr;
    ptr = get_pointer_value ();
    /* �Ǧ^���Ъ���� */ 
    printf( "*ptr=%d\n", *ptr );
    
    return 0;
}
 
/* ���ϥΪ̿�J��� */
/* �Ǧ^���Э�       */
int* get_pointer_value ()
{
    int *x;
    int input;
    x = &input;
    printf( "�п�J�@�Ӿ�ơG" );
    scanf( "%d",&input );
    printf( "*x=%d\n",*x );
 
    return x;
}

