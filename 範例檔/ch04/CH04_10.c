#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=1,b;
    for(a; a<=6; a++)	    /*外層for迴圈控制y軸輸出*/
    {
        for(b=1; b<=a; b++) /*內層for迴圈控制x軸輸出*/
        {	
            if(b == 5) 
                break;
            printf("%d ",b);/*印出b的值*/   
       }		
       printf("\n");	
    }
      
    return 0;
}

