#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=1,b;
    for(a; a<=6; a++)	    /*�~�hfor�j�鱱��y�b��X*/
    {
        for(b=1; b<=a; b++) /*���hfor�j�鱱��x�b��X*/
        {	
            if(b == 5) 
                break;
            printf("%d ",b);/*�L�Xb����*/   
       }		
       printf("\n");	
    }
      
    return 0;
}

