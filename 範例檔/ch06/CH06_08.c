#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Str1[6]="Hello"; 
    char Str2[6]={ 'H', 'e', 'l', 'l', 'o','\0'};
    char Str3[ ]="Hello";
    /*�H�W���i�����r�ꪺ�ŧi*/ 
    char Str4[ ]={ 'H', 'e', 'l', 'l', 'o'};
    /*Str4�u�O�r���}�C*/    
    
    printf("Str1 ���ΪŶ�:%d �줸 �r��Str1 �����e:%s\n", sizeof(Str1),Str1);  
    printf("Str2 ���ΪŶ�:%d �줸 �r��Str_2 �����e:%s\n", sizeof(Str2),Str2);  
    printf("Str3 ���ΪŶ�:%d �줸 �r��Str_3 �����e:%s\n", sizeof(Str3),Str3);  
    printf("Str4 ���ΪŶ�:%d �줸 �r��Str_4 �����e:%s\n", sizeof(Str4),Str4);
    /*��X�r��P�r���}�C���Ŷ��P���e*/ 
    
    return 0;
}

