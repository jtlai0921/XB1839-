#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    enum animal{
        tiger,
        monkey,
        dog,
        cat};/* 定義列舉型態 animal */
       
    enum animal zoo1,zoo2; /* 宣告列舉型態animal的變數 zoo1與zoo2 */
    zoo1=tiger;/* 將zoo1的值設定為tiger */ 
    zoo2=dog;/* 將zoo2的值設定為dog */ 
     
    printf("tiger=%d monkey=%d dog=%d cat=%d\n",tiger,monkey,dog,cat);
    printf("zoo1=%d zoo2=%d\n",zoo1,zoo2);
     
    return 0;
}

