/*�p��10! ����*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,sum=1;
    
    for (i=1;i<=10;sum*=i,i++); /*�w�qfor�j��*/
        printf("sum=%d\n",sum);   /*�L�Xi�Msum����*/

    return 0;
}

