#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 100;
    int *address1;

    address1 = &num1;
    printf( "num1���x�s��      �G%d\n", num1 );
    printf( "num1���O�����}  �G%p\n", &num1 );
    /*�Q��&�B��l���X��}*/ 
    printf( "address���x�s��   �G%p\n", address1);
    printf( "*address���x�s��   �G%d\n", *address1);
    printf( "address�O�����} �G%p\n", &address1);
    /* ��X�����ܼƪ���} */ 
    
    return 0;
}

