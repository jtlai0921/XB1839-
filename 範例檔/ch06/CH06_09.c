#include <stdio.h>
#include <stdlib.h>
#define length 40

void string_copy(char arr1[],char arr2[]);/* ������ƭ쫬�ŧi */ 

int main(void)
{
    char Str1[length]; /* �w�q�r���}�C Str1[40] */
    char Str2[length]; /* �w�q�r���}�C Str2[40] */
     
    printf("�п�J�ǳƫ������r��:"); 
    scanf("%s",Str1);/* ��J�r�� */ 
    string_copy(Str1,Str2);/* �I�s��� */ 
    printf("�����᪺�r��:%s\n",Str2);
     
    return 0;
}

void string_copy(char arr1[],char arr2[])
{
    int i;
    for(i=0;i<length;i++)
        arr2[i]=arr1[i];/* �v�@�����r�� */  
}

