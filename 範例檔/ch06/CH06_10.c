#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Name[5][10]= 
    {   
        "John",  
        "Mary",    
        "Wilson",
        "Candy",
        "Allen"
    };/* �r��}�C���ŧi */ 
    int i;
   
    for(i=0;i<5;i++)		
        printf("Name[%d]=%s\n",i,Name[i]); /* �L�X�r��}�C���e */
   
    printf("\n");
   
    return 0;
}

