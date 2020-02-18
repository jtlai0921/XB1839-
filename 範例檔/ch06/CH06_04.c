#include <stdio.h>
#include <stdlib.h>
#define NUM 8

int main()
{
    int i,j,tmp;
    int data[NUM]={58,23,47,31,69,78,93,17};	/* 原始資料 */
    printf("氣泡排序法：\n原始資料為：");
    for (i=0;i<NUM;i++)
        printf("%3d",data[i]);
	printf("\n");

	for (i=NUM-1;i>=1;i--) /* 掃瞄次數 */
	{
		for (j=0;j<i;j++)/*比較、交換次數*/
		{
			if (data[j]>data[j+1])	/* 比較相鄰兩數，如第一數較大則交換 */
			{
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
			}
		}
		printf("第 %d 次排序後的結果是：",NUM-i); /*把各次掃描後的結果印出*/
		for (j=0;j<NUM;j++)
			printf("%3d",data[j]);
		printf("\n");
	}
	printf("排序後結果為：");
	for (i=0;i<NUM;i++)
		printf("%3d",data[i]);
	printf("\n");
	
	return 0;
}

