#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,i,j,n1=1;
    long sum=0;
    
    printf("�п�J���@���:"); 
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            n1*=j; /* n!����*/
        sum+=n1;/* 1!+2!+3!+..n!*/
        n1=1;
    }
    
    printf("1!+2!+3!+...+%d!=%d\n",n,sum);
    
    return 0; 
} 

