#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr2[50];
    int i,sum;
    printf("請輸入字串：");
    scanf("%s",arr2); /* 取得使用者輸入的字串 */
    for (i=0;i<50;i++)
    {
        if (arr2[i]=='\0')
            break; /* 如果是使用者輸入字串的結尾就中斷迴圈 */
        sum=i;/* 紀錄空字元前一個字元的索引 */
    }
    for (i=sum;i>=0;i--)     /* 將使用者輸入字串反向輸出 */
    printf("%c",arr2[i]); 
    printf("\n");
   
    return 0;
}

