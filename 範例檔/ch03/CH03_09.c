#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=6870,hundred,fifty,ten;
    
    hundred=num/100;
    fifty=(num-hundred*100)/50;
    ten=(num-hundred*100-fifty*50)/10;
    /*�Q��²�檺�|�h�B��*/ 
    printf("�ʤ��ȶr��%d�i ���Q���w����%d�� �Q���r�w����%d��\n"
            ,hundred,fifty,ten); 
       
    return 0; 
}

