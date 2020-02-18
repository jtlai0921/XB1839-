#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int a=10,b=0;
      
    printf("a=%d b=%d b=++a\n",a,b);
    b=++a;/* 前置型遞增運算子*/
    printf("a=%d b=%d\n",a,b);   
      
    a=10,b=0;
    printf("a=%d b=%d b=--a\n",a,b);
    b=--a;/* 前置型遞減運算子*/
    printf("a=%d b=%d\n",a,b);
      
    a=10,b=0;
    printf("a=%d b=%d b=a++\n",a,b);
    b=a++;/* 後置型遞增運算子*/
    printf("a=%d b=%d\n",a,b);
      
    a=10,b=0;
    printf("a=%d b=%d b=a--\n",a,b);
    b=a--;/* 後置型遞減運算子*/
    printf("a=%d b=%d\n",a,b);    
      
    return 0;
}

