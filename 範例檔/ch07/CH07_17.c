#include<stdio.h>
#include <stdlib.h>

void replace(char *,int,char);   /* �ŧireplace()��ƪ��쫬 */

int main(void)
{
   char str[25];
   char ch;
   int i;
   
   printf("�п�J�@�r��:");
   gets(str); 
   printf("�п�J����m�����r����m�P�r�� ex:i ch ");
   scanf("%d %c",&i,&ch); /* ��J����m�����r����m�P�r�� */
   replace(str,i,ch);			/* �I�s���replace() */
   printf("�m����r�ꪺ���e��");
   printf("%s\n",str);
   printf("\n");
      
   
   return 0;
}

void replace(char *ptr,int n,char ch)
{
   *(ptr+n-1)=ch;      /* �N�}�C��n�Ӥ����]�Ȭ�ch*/
}

