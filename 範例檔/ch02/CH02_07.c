#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char ch1=67;     /*�H10�i��ASCII�X�]�w�r���ܼ�*/
    char ch2='r';    /*�H�r���]�w�r���ܼ�*/ 
    char ch3='\111'; /*�H8�i��ASCII�X�]�w�r���ܼ�*/
    char ch4='\x61'; /*�H16�i��ASCII�X�]�w�r���ܼ�*/
    char ch5=0111;
    char ch6=0x61;
    
    /* ��X�r���ܼƪ��r���� */ 
    printf("char1=%c\n",ch1);
    printf("char2=%c\n",ch2);
    printf("char3=%c\n",ch3);
    printf("char4=%c\n",ch4);
    printf("char5=%c\n",ch5);
    printf("char6=%c\n",ch6);
    
    
    /* ��X�r���ܼƪ�ASCII�X */ 
    printf("char1=%d\n",ch1);
    printf("char2=%d\n",ch2);
    printf("char3=%d\n",ch3);
    printf("char4=%d\n",ch4);
    printf("char5=%d\n",ch5);
    printf("char6=%d\n",ch6);
    
    return 0;
}

