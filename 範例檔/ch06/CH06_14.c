#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int length;/*�Χ@�p��r�ꪺ����*/
    char str[30];
	
    printf("�п�J�r��:");
    /*��J�r��*/
    scanf("%s",str);
    printf("��J���r�ꬰ:%s\n",str);
    length=0;
    while (str[length]!='\0')
        length++; 
    printf("���r�꦳%d�Ӧr��\n",length);
       
    return 0;
}

