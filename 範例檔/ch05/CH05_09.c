#include <stdio.h>
#include <stdlib.h>

int fib(int);     /* fib()函數的原型宣告 */
int output[1000]; /* fibonacci的暫存區 */ 

int main(void)
{
    int i,n;
    printf("請輸入要計算到第幾個費式數列:");
    scanf("%d",&n); 
    for(i=0;i<=n;i++) /* 計算前n個費氏數列 */
        printf("fib(%d)=%d\n",i,fib(i));
    
    return 0;
}

int fib(int n)
{
    int result;
    result=output[n];
    if (result==0) 
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        else
            return (fib(n-1)+fib(n-2));      
    }
    output[n]=result;
    
    return result;
}
