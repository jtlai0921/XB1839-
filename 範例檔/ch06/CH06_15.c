#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;
    int A[3][3] = {{1,3,5},{7,9,11},{13,15,17}};
    /* �G���}�C���ŧi */ 
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    /* �G���}�C���ŧi */
	int C[3][3] = {0};
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	    C[i][j]=A[i][j]+B[i][j];/* �x�}C=�x�}A+�x�}B */
	
    printf("[�x�}A�����G]\n");	
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",A[i][j]);
        printf("\n");
    }
	
    printf("[�x�}B�����G]\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",B[i][j]);
		printf("\n");
	}
    
    printf("[�x�}A�M�x�}B�ۥ[�����G]\n");	/*�L�XA+B�����e*/	
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",C[i][j]);
        printf("\n");
    }
	
    return 0;
}

