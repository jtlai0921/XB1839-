#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Name[5][10]={"John",  
                      "Tom",    
                      "Androliea",
                      "Candy",
                      "Allen"};/* �r��}�C���ŧi */ 
    int i,j;
   
    for(i=0;i<5;i++)	
    {
        j=0;
        while (Name[i][j]!='\0')
            j++;
        printf("Name[%d]=%s ��ڪ���:%d �줸\n",i,Name[i],j); /* �L�X�r��}�C���e */
    }
    printf("\n");
   
    return 0;
}

