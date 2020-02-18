#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
    int a=100;		/* 宣告整數變數a */
    double b=113.14;	/* 宣告浮點數變數a */
    char c='!';   	/* 宣告字元變數a */
   
    printf("a=%-8d  \tsizeof(a)=%d  \t位址為%p\n",a,sizeof(a),&a);
    printf("b=%-8f  \tsizeof(b)=%d  \t位址為%p\n",b,sizeof(b),&b);
    printf("c=%-8c  \tsizeof(c)=%d  \t位址為%p\n",c,sizeof(c),&c);
    /* 使用&運算子輸出變數位址 */ 
   
    return 0;
}

