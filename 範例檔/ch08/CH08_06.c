#include <stdio.h>
#include <stdlib.h>

struct club
{
    char name[3][10];
    char title[10];
    int age;
}; /* 定義結構 ,這個club結構為全域性的結構型態*/ 

void show(struct club);/* 結構變數傳值呼叫函數原型宣告 */ 

int main(void)
{
   
    struct club m1={"張鎮華","王志忠","黃思文","老虎隊",25};
    /* 定義並設定結構陣列初始值 */ 
    show(m1);/* 呼叫函數 */ 

    return 0;
}

void show(struct club s)/* 定義show()函數 */ 
{
    printf("%s \t",s.title);
    printf("%s\t %s\t %s",s.name[0],s.name[1],s.name[2]);
    printf("\n");
    /* 輸出成員姓名字串 */
    printf("--------------------------------\n");
}

