#include <stdio.h>
#include <stdlib.h>

int fib(int);     /* fib()��ƪ��쫬�ŧi */
int output[1000]; /* fibonacci���Ȧs�� */ 

int main(void)
{
    int i,n;
    printf("�п�J�n�p���ĴX�ӶO���ƦC:");
    scanf("%d",&n); 
    for(i=0;i<=n;i++) /* �p��en�ӶO��ƦC */
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
