#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* �ŧi����ܼ�no�P�B�I���ܼ�fno */ 
    int no=523;
    float fno=13.4567;
    
    printf("%4d\n",no);/*�H% 4d��X*/ 
    printf("%-4d\n",no);/*�H%-4d��X*/ 
    printf("%6.3f\n",fno);/*�H6.3f�榡��X*/ 
    
    return 0;
}

