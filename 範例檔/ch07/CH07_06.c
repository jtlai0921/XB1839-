#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *int_ptr;    /* 宣告整數型態指標 */
    char *chr_ptr;   /* 宣告字元型態指標 */
    int i;
 
    for ( i = 1; i <= 5; i++ )
    {
        int_ptr++; /*整數指標運算*/ 
        chr_ptr++; /*字元指標運算*/ 
        printf( "int_ptr = %p\tchr_ptr = %p\n", int_ptr, chr_ptr );
    }
    
    return 0;
}

