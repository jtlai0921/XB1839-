#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i=120,j=33;  /* �w�q����ܼ� i �P j */
    float Result;    /* �w�q�B�I���ܼ� Result */
    
    Result=i/j;
    printf("Result=i/j=%d/%d=%f\n\n", i, j, Result);
    printf("�j��A�ഫ�����浲�G\n");
    Result=(float)i /(float) j; 
    printf("Result=(float)i/(float)j=%d/%d=%f\n", i, j, Result);
     
    return 0;
}

