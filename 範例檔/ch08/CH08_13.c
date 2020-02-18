#include <stdio.h>
#include <stdlib.h>

int encode(int); /*加密函數*/ 
int decode(int); /*解密函數 */
	
int main(void)
{
    int pwd;
    printf("請輸入密碼：");
    scanf("%d",&pwd);
    pwd = encode(pwd);
    printf("加密後：%d\n",pwd);
    pwd = decode(pwd);
    printf("解密後：%d\n",pwd);
	    
    return 0;
}
/*引  數：未加密的密碼*/ 
/*傳回值：加密後的密碼*/ 
int encode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] += 32;
    return u1.num;
}
/*引  數: 加密過的密碼*/
/*傳回值: 還原後的密碼*/ 
int decode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] -= 32;
    return u1.num;
}

