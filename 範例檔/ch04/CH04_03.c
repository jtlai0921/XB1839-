#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
    int degree,pay;
   
    printf("�п�J�q�q�׼�:");
    scanf("%d",&degree); 
   
    if(degree>=1 && degree<=20)
        pay=10*degree;
    else if (degree>=21 && degree<=60)   
        pay=12.5*degree;
    else if (degree>=61 && degree<=80) 
        pay=18*degree;
    else if (degree>=81)
        pay=22*degree;/* if else ���O�ӭp��q�O */ 
    printf("����ιq��%d��,�q�O�n%d��\n",degree,pay); 
    
   return 0;
}

