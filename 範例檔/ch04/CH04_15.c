#include <stdio.h> 
#include <stdlib.h>   
                 
int main(void)
{
    int Num1, Num2,TmpNum; /* �ŧi3�Ӿ���ܼ� */          

    printf("�D����Ӿ�ƪ��̤j���]��(g.c.d):\n");
    printf("�п�J��Ӿ��:");
	 
    scanf("%d %d",&Num1,&Num2); /* ��J��Ӿ�� */           

    if (Num1 < Num2)                   
    {                                     
        TmpNum=Num1;                           
        Num1=Num2;
        Num2=TmpNum; /* ��X��Ƹ��j�� */ 
    }

    while (Num2 != 0)                
    {                                      
        TmpNum=Num1 % Num2;   /* �D��ƪ��l�ƭ� */         
        Num1=Num2;                              
        Num2=TmpNum; /*����۰��k */ 
    }
	  
    printf("�̤j���]��(g.c.d)=%d\n",Num1); 

    return 0;
}

