#include <stdio.h>
#include <stdlib.h> 
#define NUM 6

void Multiple(int arr[],int);/* ���Multiple()���쫬�ŧi */

int main()
{
    int i,array[NUM]={ 57,48,38,46,25,17 };
    /* �ŧi�õ��_�}�C��l�� */ 
	   
    printf("�I�sMultiple()�e,�}�C�����e��: ");   
    for(i=0;i<NUM;i++)	/* �L�X�}�C���e */
        printf("%d ",array[i]);
   
    printf("\n");
   
    Multiple(array,NUM); /* �I�s���Multiple() */
   
    printf("�I�sMultiple()��,�}�C�����e��: "); 
   
    for(i=0;i<NUM;i++)	/* �L�X�}�C���e */
        printf("%d ",array[i]);
    printf("\n");
       
    return 0;
}

void Multiple(int arr[],int n1)/* �w�qMultiple()��ƥD�� */ 
{
    int i;
  
    for(i=0;i<n1;i++)	
        arr[i]*=2; /* �C�Ӱ}�C������*2 */ 
}

