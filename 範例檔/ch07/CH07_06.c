#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *int_ptr;    /* �ŧi��ƫ��A���� */
    char *chr_ptr;   /* �ŧi�r�����A���� */
    int i;
 
    for ( i = 1; i <= 5; i++ )
    {
        int_ptr++; /*��ƫ��йB��*/ 
        chr_ptr++; /*�r�����йB��*/ 
        printf( "int_ptr = %p\tchr_ptr = %p\n", int_ptr, chr_ptr );
    }
    
    return 0;
}

