#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    int a=100;		/* �ŧi����ܼ�a */
    double b=113.14;	/* �ŧi�B�I���ܼ�a */
    char c='!';   	/* �ŧi�r���ܼ�a */
   
    printf("a=%-8d  \tsizeof(a)=%d  \t��}��%p\n",a,sizeof(a),&a);
    printf("b=%-8f  \tsizeof(b)=%d  \t��}��%p\n",b,sizeof(b),&b);
    printf("c=%-8c  \tsizeof(c)=%d  \t��}��%p\n",c,sizeof(c),&c);
    /* �ϥ�&�B��l��X�ܼƦ�} */ 
   
    return 0;
}

