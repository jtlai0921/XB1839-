#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int a=10,b=0;
      
    printf("a=%d b=%d b=++a\n",a,b);
    b=++a;/* �e�m�����W�B��l*/
    printf("a=%d b=%d\n",a,b);   
      
    a=10,b=0;
    printf("a=%d b=%d b=--a\n",a,b);
    b=--a;/* �e�m������B��l*/
    printf("a=%d b=%d\n",a,b);
      
    a=10,b=0;
    printf("a=%d b=%d b=a++\n",a,b);
    b=a++;/* ��m�����W�B��l*/
    printf("a=%d b=%d\n",a,b);
      
    a=10,b=0;
    printf("a=%d b=%d b=a--\n",a,b);
    b=a--;/* ��m������B��l*/
    printf("a=%d b=%d\n",a,b);    
      
    return 0;
}

