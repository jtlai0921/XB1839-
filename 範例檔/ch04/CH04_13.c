#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=1, new_pw, password=3388; /*�Q��password�ܼƨ��x�s�K�X�H������*/

    while(i<=3)  /*��J���ƥH�T������*/
    {			
        printf("�п�J�K�X:");  
        scanf("%d", &new_pw);/* ��J��ƱK�X */ 
	    
        if (new_pw != password)  /*�p�G��J���K�X�Ppassword���P*/
        {
            printf("�K�X�o�Ϳ��~!!\n");    
            i++;                                     
            continue;  /*���^while�}�l�B*/
        }
        printf("�K�X���T!!\n ");  /*�K�X���T*/
        break;  		                       
    }  	
    if (i>3)
        printf("�K�X���~�T���A�����n�J!!\n"); /* �K�X���~�B�z */ 
           
    return 0;
}

