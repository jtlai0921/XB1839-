#include <stdio.h>
#include <stdlib.h>

typedef int INTEGER;/* ��int�w�q��INTEGER */ 
typedef char* STRING;/* ��char*�w�q��STRING */ 

int main(void)
{    
    INTEGER score=12345;/* �ŧiscore�O INTEGER���A */ 
    STRING s1="�ڬO�i�j�j";/* �ŧis1�OSTRING���A */ 
      
    printf("s1=%s \t score=%d\n",s1,score);
     
    return 0;
}

