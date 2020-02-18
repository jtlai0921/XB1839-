#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char *ptr= "cherry";/* 以指標宣告字串方式 */ 
    char name[] = { 'c', 'h', 'e', 'r', 'r','y','\0'};
    /* 以字元陣列宣告字串方式 */
     
    printf("ptr=%s 所佔空間大小:%d位元  name=%s 所佔空間大小:%d位元\n",
	        ptr,sizeof(ptr),name,sizeof(name));
    printf("-------------------------------------\n");
     
    for(i=0;i<6;i++)
        printf("ptr+%d=%s \t name+%d=%s \n",i,ptr+i,i,name+i);
        /* 分別以指標變數及指標常數輸出字串 */ 
        printf("-------------------------------------\n");
     
    for(i=0;i<6;i++)
        printf("ptr[%d]=%c \t name[%d]=%c \t *(ptr+%d)=%c\n",
                i,ptr[i],i,name[i],i,*(ptr+i));
    /* 以陣列方式輸出字元 */ 
    printf("-------------------------------------\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",ptr);
        ptr++; /* 將ptr加一 */ 
    }
           
    return 0;
}

