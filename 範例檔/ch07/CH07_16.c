#include <stdio.h>
#include <stdlib.h>

int *min(int *,int *);	/* 宣告傳址呼叫函數min()的原型 */

int main(void)
{
    int a,b,*ptr;
   
    printf("請輸入兩個整數:"); 
    scanf("%d %d",&a,&b);
   
    ptr=min(&a,&b);/* 函數與指標回傳值 */ 
    printf("最小值=%d\n",*ptr);
   
    return 0;
}

int *min(int *a, int *b)
{
    if(*a>*b)
        return b;/*回傳指標值*/ 
    else 
        return a;/*回傳指標值*/ 
}

