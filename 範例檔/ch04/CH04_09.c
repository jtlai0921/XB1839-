#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h=30,day=0;	
    do   /*do-while迴圈開始*/
    {                                 
        day++;    /*天數*/
        if(h-=3)  /*每執行一次迴圈高度減少3公尺(h=h-3)*/
            h++;  /*加回1公尺(h=h+1)*/
    } while(h>0); /*迴圈成立的條件為高度大於0*/
    printf("蝸牛需要 %d 天\n", day); /*印出天數*/
   
    return 0;
}  

