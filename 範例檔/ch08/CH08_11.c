#include <stdio.h>
#include <stdlib.h>

struct student1
{
    char name[10];/* 佔10bytes 空間 */
    int score; /* 佔 4bytes 空間 */
}; /* 宣告結構型態 */ 
 
union student
{
    char name[10];/* 佔10bytes 空間 */
    int score;/* 佔 4bytes 空間 */
}; /* 宣告聯合型態 */ 

int main(void)
{
    struct student1 s1;/* s1為結構變數 */ 
    union student s; /* s為聯合變數 */ 
     
    printf("結構變數s1=%d位元組 聯合變數s=%d位元組\n",sizeof(s1),sizeof(s));
     
    return 0;
}

