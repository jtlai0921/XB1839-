#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char *ptr= "cherry";/* �H���Ыŧi�r��覡 */ 
    char name[] = { 'c', 'h', 'e', 'r', 'r','y','\0'};
    /* �H�r���}�C�ŧi�r��覡 */
     
    printf("ptr=%s �Ҧ��Ŷ��j�p:%d�줸  name=%s �Ҧ��Ŷ��j�p:%d�줸\n",
	        ptr,sizeof(ptr),name,sizeof(name));
    printf("-------------------------------------\n");
     
    for(i=0;i<6;i++)
        printf("ptr+%d=%s \t name+%d=%s \n",i,ptr+i,i,name+i);
        /* ���O�H�����ܼƤΫ��б`�ƿ�X�r�� */ 
        printf("-------------------------------------\n");
     
    for(i=0;i<6;i++)
        printf("ptr[%d]=%c \t name[%d]=%c \t *(ptr+%d)=%c\n",
                i,ptr[i],i,name[i],i,*(ptr+i));
    /* �H�}�C�覡��X�r�� */ 
    printf("-------------------------------------\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",ptr);
        ptr++; /* �Nptr�[�@ */ 
    }
           
    return 0;
}

