#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    int i,arr[6]={312,16,35,65,52,111};
    printf("arr=%p  &arr=%p\n",arr,&arr);		
    /* �L�X���б`��arr���ȻP���б`��arr����} */
   
    for(i=0;i<6;i++)
        printf("&arr[%d]=%p  arr(+%d)=%p\n",i,&arr[i],i,arr+i);  
        /* �L�X�}�Ca�C�@�Ӥ�������} */
    printf("--------------------------------------\n");
    for(i=0;i<6;i++)
        printf("*(&arr[%d])=%d \t *arr(+%d)=%d\n",i,*(&arr[i]),i,*(arr+i)); 
        /* �L�X�}�Ca�C�@�Ӥ������� */
     
    return 0;
}

