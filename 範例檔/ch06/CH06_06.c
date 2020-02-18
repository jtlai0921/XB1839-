#include <stdio.h>
#include <stdlib.h> 
#define NUM 6

void Multiple(int arr[],int);/* 函數Multiple()的原型宣告 */

int main()
{
    int i,array[NUM]={ 57,48,38,46,25,17 };
    /* 宣告並給于陣列初始值 */ 
	   
    printf("呼叫Multiple()前,陣列的內容為: ");   
    for(i=0;i<NUM;i++)	/* 印出陣列內容 */
        printf("%d ",array[i]);
   
    printf("\n");
   
    Multiple(array,NUM); /* 呼叫函數Multiple() */
   
    printf("呼叫Multiple()後,陣列的內容為: "); 
   
    for(i=0;i<NUM;i++)	/* 印出陣列內容 */
        printf("%d ",array[i]);
    printf("\n");
       
    return 0;
}

void Multiple(int arr[],int n1)/* 定義Multiple()函數主體 */ 
{
    int i;
  
    for(i=0;i<n1;i++)	
        arr[i]*=2; /* 每個陣列元素值*2 */ 
}

