#include <stdio.h>
#include <stdlib.h>
#define NUM 8

int main()
{
    int i,j,tmp;
    int data[NUM]={58,23,47,31,69,78,93,17};	/* ��l��� */
    printf("��w�ƧǪk�G\n��l��Ƭ��G");
    for (i=0;i<NUM;i++)
        printf("%3d",data[i]);
	printf("\n");

	for (i=NUM-1;i>=1;i--) /* ���˦��� */
	{
		for (j=0;j<i;j++)/*����B�洫����*/
		{
			if (data[j]>data[j+1])	/* ����۾F��ơA�p�Ĥ@�Ƹ��j�h�洫 */
			{
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
			}
		}
		printf("�� %d ���Ƨǫ᪺���G�O�G",NUM-i); /*��U�����y�᪺���G�L�X*/
		for (j=0;j<NUM;j++)
			printf("%3d",data[j]);
		printf("\n");
	}
	printf("�Ƨǫᵲ�G���G");
	for (i=0;i<NUM;i++)
		printf("%3d",data[i]);
	printf("\n");
	
	return 0;
}

