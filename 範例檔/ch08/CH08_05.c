#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct club
    {
        char name[3][10];
        char title[10];
        int age;
    }; /* 定義結構 ,結構中有陣列資料成員*/ 

    struct club member_name[3]=
    {{"張鎮華","王志忠","黃思文","老虎隊",25},
     {"陳德來","陳錦弘","古易天","雄獅隊",32},
     {"張國忠","李師強","趙建華","企鵝隊",46}};
    /* 定義並設定結構陣列初始值 */ 
    int i;
  
    for(i=0;i<3;i++)
    printf("%s \t",member_name[i].title);
    printf("\n--------------------------------\n");
   
    for(i=0;i<3;i++)
    {
        printf("%s\t %s\t %s",member_name[i].name[0],member_name[i].name[1],member_name[i].name[2]);
        printf("\n");
    }/* 輸出每一個club的陣列成員姓名字串 */
    printf("--------------------------------\n");
   
    return 0;
}

