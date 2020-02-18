#include <stdio.h> 
#include <stdlib.h>   
                 
int main(void)
{
    int Num1, Num2,TmpNum; /* 3俱计跑计 */          

    printf("―ㄢ俱计程そ计(g.c.d):\n");
    printf("叫块ㄢ俱计:");
	 
    scanf("%d %d",&Num1,&Num2); /* 块ㄢ俱计 */           

    if (Num1 < Num2)                   
    {                                     
        TmpNum=Num1;                           
        Num1=Num2;
        Num2=TmpNum; /* тㄢ计耕 */ 
    }

    while (Num2 != 0)                
    {                                      
        TmpNum=Num1 % Num2;   /* ―ㄢ计緇计 */         
        Num1=Num2;                              
        Num2=TmpNum; /*劣锣埃猭 */ 
    }
	  
    printf("程そ计(g.c.d)=%d\n",Num1); 

    return 0;
}

