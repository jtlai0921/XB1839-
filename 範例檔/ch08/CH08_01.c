#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void)
{
    struct student
    {
        char name[10];
        int score;
        int ID;
    } s1,s2; /* 宣告student結構的s1,s2變數 */ 
     
    float total,average;
     
    strcpy(s1.name, "Justin");/* 設定s1.name初始值 */ 
    s1.score = 90;
    s1.ID=10001;
    printf("第一個學生的姓名=%s 成績=%d 學號=%d \n", s1.name,s1.score,s1.ID);
    printf("請輸入第二個學生的姓名:");
    gets(s2.name);/* 輸入s2.name初始值 */ 
    printf("請輸入第二個學生的成績與學號:");
    scanf("%d %d",&s2.score,&s2.ID);/* 輸入s2的其他資料成員 */ 
    printf("第二個學生的姓名=%s 成績=%d 學號=%d \n",  s2.name,s2.score,s2.ID);
    
    total=s1.score+s2.score;/* 計算總分 */ 
    average=total/2;  /* 計算平均 */ 
    printf("=================================================\n");
    printf("兩位學生總分:%f 兩位學生平均:%f\n",total,average);
    
    return 0;
}

