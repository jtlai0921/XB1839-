#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     
    char c1='\a'; /* �H����r���ӳ]�� */ 
    char c2=7;    /* �H10�i��ӳ]�� */ 
    char c3='\7'; /* �H8�i��ӳ]�� */ 
    char c4='\x7';/* �H16�i��ӳ]�� */ 
         
    printf("%c%c%c%c\n",c1,c2,c3,c4); /* ��X�|�n���n*/ 
        
    return 0;
}

