#include <stdio.h>
#include <stdlib.h>

#define Array_row 2
#define Array_column 6

void Multiple2(int brr[][Array_column]);/* ���Multiple2()���쫬 */

int main(void)
{
    int i,j,B[][Array_column]={{1,2,3,4,5,6},{7,8,9,10,11,12}};
   
    printf("�I�sMultiple2()�e,�}�C�����e��: ");   
    for(i=0;i<Array_row;i++) /* �L�X�}�C���e */
        for(j=0;j<Array_column;j++)
            printf("%d ",B[i][j]);
        printf("\n");
   
    Multiple2(B); /* �I�s���Multiple2() */
    printf("�I�sMultiple2()��,�}�C�����e��: "); 
   
    for(i=0;i<Array_row;i++) /* �L�X�}�C���e */
        for(j=0;j<Array_column;j++)
            printf("%d ",B[i][j]);
      printf("\n"); 
   
    return 0;
}

void Multiple2(int brr[][Array_column])/*�ĤG�������������ӯ�*/ 
{
    int i,j;
    for(i=0;i<Array_row;i++) /* �L�X�}�C���e */
        for(j=0;j<Array_column;j++)	
            brr[i][j]*=2;
}

