/*����B��l�m��*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int math, physical; /*�ŧi���ت�����*/
    char chr_pass;      /*�ŧi��ܦX�檺�r���ܼ�*/
 
    math=85;
    physical=57;
 
    printf("�ƾ� = %d ���P ���z = %d \n",math,physical);
    (math >= 60 && physical >= 60 )? (chr_pass='Y'):(chr_pass='N');
    /*�L�Xchr_pass�ܼƤ��e�A��ܸӦҥͬO�_�X��*/
    printf( "�ӦW�ҥͬO�_�X��H %c\n", chr_pass );  
   
    math=65;
    physical=77;
    printf("�ƾ� = %d ���P ���z = %d \n",math,physical);
    chr_pass = ( math >= 60 && physical >= 60 )?'Y':'N';
    printf( "�ӦW�ҥͬO�_�X��H %c\n", chr_pass );
    
    return 0; 
 }

