#include <stdio.h>
#include <stdlib.h>

float square(float);/* ��ƭ쫬�ŧi */ 

int main(void)
{  
    float x;
   
    printf("�п�Jx��:"); 
    scanf("%f",&x);
    printf("%.1f^2=%.1f\n",x,square(x));/* �I�ssquare()��� */ 
      
    return 0;
}

float square(float x) /* �w�qsquare()��� */ 
{
    return x*x; 
}

