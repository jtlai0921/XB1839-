#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr2[50];
    int i,sum;
    printf("�п�J�r��G");
    scanf("%s",arr2); /* ���o�ϥΪ̿�J���r�� */
    for (i=0;i<50;i++)
    {
        if (arr2[i]=='\0')
            break; /* �p�G�O�ϥΪ̿�J�r�ꪺ�����N���_�j�� */
        sum=i;/* �����Ŧr���e�@�Ӧr�������� */
    }
    for (i=sum;i>=0;i--)     /* �N�ϥΪ̿�J�r��ϦV��X */
    printf("%c",arr2[i]); 
    printf("\n");
   
    return 0;
}

