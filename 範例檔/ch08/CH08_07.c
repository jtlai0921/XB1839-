#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int Eng;
    int Chi;
    int Math;
}; /* 定義結構 ,這個student結構為全域性的結構型態*/ 

void calculate(struct student);/* 結構變數傳值呼叫函數原型宣告 */ 

int main(void)
{
   
    struct student stud={"林弘生",80,60,97};
    /* 定義並設定結構初始值 */ 
    calculate(stud);/* 呼叫函數 */ 
    printf("-----------------------------------------------\n");
    printf("%s 的原始成績 英文:%d 國文:%d 數學:%d\n",stud.name,stud.Eng,stud.Chi,stud.Math);       
    printf("-----------------------------------------------\n");
    
    return 0;
}

void calculate(struct student s1)/* 定義calculate()函數 */ 
{
    s1.Eng=s1.Eng*1;
    s1.Chi=s1.Chi*1.3;
    s1.Math=s1.Math*1; 
    /* 輸出成員姓名字串及各科成績 */
    printf("--------------------------------------------\n");
    printf("%s 的加重計分成績 英文:%d 國文:%d 數學:%d\n",s1.name,s1.Eng,s1.Chi,s1.Math);    
}

