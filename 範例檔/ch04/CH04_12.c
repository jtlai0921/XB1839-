#include <stdio.h>
#include <stdlib.h>
		
int main()
{
    int year=0;	 
    /*�ŧi����ܼ�*/
    printf("�п�J�褸�~:");
    scanf("%d", &year);  /*��J�褸�~*/ 
	
    if(year % 4 !=0)	 /*�p�Gyear���O4������*/
        printf("%d �~���O��~�C\n",year); /*�h���year���O��~*/
    else if(year % 100 ==0)  /*�p�Gyear�O100������*/
    {
        if(year % 400 ==0)      /*�Byear�O400������*/
            printf("%d �~�O��~�C\n",year); 
           /*���year�O��~*/
	    else      /*�_�h*/
            printf("%d �~���O��~�C\n",year); 
            /*�h���year���O��~*/
    }	
    else  /*�_�h*/
        printf("%d �~�O��~�C\n",year); /*�h���year�O��~*/
    
    return 0;
}

