#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int *ptr;

    ptr = &num1;/* ptr���Vnum1����} */ 
    printf( "num1=%d\t*ptr=%d\tptr=%p\t&num1=%p\n",num1,*ptr,ptr,&num1 );
    ptr = &num2;/* ptr���Vnum2����} */ 
    printf( "num2=%d\t*ptr=%d\tptr=%p\t&num2=%p\n",num2,*ptr,ptr,&num2 );
 
    return 0;
}

