#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1,sum=0;

    for (;i<=10;i++)  /*定義for迴圈*/
        sum+=i;       /*sum=sum+i*/
      
    printf("1+2+3+...+10=%d\n", sum);  /*印出sum的值*/
      
    return 0;
}

