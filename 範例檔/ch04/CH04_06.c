/*計算10! 的值*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,sum=1;
    
    for (i=1;i<=10;sum*=i,i++); /*定義for迴圈*/
        printf("sum=%d\n",sum);   /*印出i和sum的值*/

    return 0;
}

