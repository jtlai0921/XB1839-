#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,total;
    printf("�����W�L�@�p��,�C�p�ɦ��O40��\n");
    printf("�п�J�����X�p��: ");
    scanf("%d",&t);	/*��J�ɼ�*/     
    if(t>=1)
    {
        total=t*40;	/*�p��O��*/
        printf("����%d�p��,�`�O�ά�:%d��\n",t,total);    
    }
  
    return 0; 
}

