#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=100,*ptr1,**ptr2;
    ptr1=&num;/* ptr1���Vnum����} */ 
    ptr2=&ptr1;/* ptr2���Vptr1����} */ 

    printf("num=%d  &num=%d  ptr1=%d  *ptr1=%d\n",
            num,&num,ptr1,*ptr1);
    printf("&ptr1=%d  ptr2=%d  *ptr2=%d **ptr2=%d\n",
            &ptr1,ptr2,*ptr2,**ptr2);
            /*��X��������*/
          
    return 0;
}

