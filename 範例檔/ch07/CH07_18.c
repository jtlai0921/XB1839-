#include <stdio.h> 
#include <stdlib.h>   
#include <string.h>    

int main(void)  
{  
    char* fruit[5] = {"apple","orange","watermelon",
            "strawberry","pineapple"}; /* ���G�W�� */ 
    int i,price[5] = {20,15,55,30,30};  /* ������ */
    char favo[20];  
    printf("�w����{�I�a�ܤ��G�M�橱\n");  
    printf("===============================\n");  
    printf("[apple], [orange], [watermelon]\n");  
    printf("[strawberry], [pineapple]\n\n"); 
    printf("�аݱz�Q�R���@�ؤ��G�H ");  
    scanf("%s",favo);     /* ���o�ϥΪ̿�J���r��  */
    for(i=0;i<5;i++)  
    {  
        if(strcmp(fruit[i],favo) == 0)  
        /* �i��r���� ,�p�G�r��ۦP�N��X�۹�����������  */
            printf("%s�@��O%d��\n",favo,price[i]);    
    }     
    
    return 0;
}

