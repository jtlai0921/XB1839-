#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1,sum=0;

    for (;i<=10;i++)  /*�w�qfor�j��*/
        sum+=i;       /*sum=sum+i*/
      
    printf("1+2+3+...+10=%d\n", sum);  /*�L�Xsum����*/
      
    return 0;
}

