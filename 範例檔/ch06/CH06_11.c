#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Name[5][10]={"John",  
                      "Tom",    
                      "Androliea",
                      "Candy",
                      "Allen"};/* 字串陣列的宣告 */ 
    int i,j;
   
    for(i=0;i<5;i++)	
    {
        j=0;
        while (Name[i][j]!='\0')
            j++;
        printf("Name[%d]=%s 實際長度:%d 位元\n",i,Name[i],j); /* 印出字串陣列內容 */
    }
    printf("\n");
   
    return 0;
}

