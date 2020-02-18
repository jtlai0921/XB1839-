#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    int i,arr[6]={312,16,35,65,52,111};
    printf("arr=%p  &arr=%p\n",arr,&arr);		
    /* 印出指標常數arr的值與指標常數arr的位址 */
   
    for(i=0;i<6;i++)
        printf("&arr[%d]=%p  arr(+%d)=%p\n",i,&arr[i],i,arr+i);  
        /* 印出陣列a每一個元素的位址 */
    printf("--------------------------------------\n");
    for(i=0;i<6;i++)
        printf("*(&arr[%d])=%d \t *arr(+%d)=%d\n",i,*(&arr[i]),i,*(arr+i)); 
        /* 印出陣列a每一個元素的值 */
     
    return 0;
}

