#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Score[5]={ 87,56,90,65,80 };    
    /* 定義整數陣列 Score[5],並設定5筆成績 */
    int count, Total=0;
    for (count=0; count < 5; count++) /* 執行 for 迴圈讀取學生成績 */
    {
        printf("第 %d 位學生的分數:%d\n", count+1,Score[count]);  
        Total+=Score[count];  /* 由陣列中讀取分數計算總合 */
    }
    printf("-------------------------\n");
    printf("5位學生的總分:%d\n", Total);  
    /* 輸出成績總分 */
    printf("-------------------------\n");
     
    return 0;
}

