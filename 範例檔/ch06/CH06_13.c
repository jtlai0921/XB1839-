#include <stdio.h>
#include <stdlib.h>

int min(int arr[][3][3],int,int,int);
/* min()��ƪ��쫬�ŧi */ 
int main(void)
{   
    int num[2][3][3]=
                {{{49,45,68},
                  {75,52,69},
                  {55,38,66}},
                 {{21,39,25 },
                  {38,89,14},
                  {90,101,89}}};/* �ŧi�T���}�C */
                             
    printf("�T���}�C���̤p��= %d\n", min(num,2,3,3)); 
   
    return 0;
}	

int min(int arr[][3][3],int a,int b,int c)/* �w�qmin()��ƥD�� */ 
{
    int i,j,k,min_value;
 
    min_value=arr[0][0][0];/* �]�wmin_value���Ȭ��}�C���Ĥ@�Ӥ����� */
      
    for(i=0;i<a;i++)	     
        for(j=0;j<b;j++)    
            for(k=0;k<c;k++)           
                if(min_value>=arr[i][j][k])
                    min_value=arr[i][j][k]; /* �Q�ΤT�h�j���X�̤p�� */
        
    return min_value; /* �Ǧ^��� min_value */ 
}

