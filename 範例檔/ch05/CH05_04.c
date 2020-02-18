#include <stdio.h>
#include <stdlib.h>

void swap(int,int);/*肚㊣ㄧ计*/ 

int main(void)
{
    int a,b;
    a=10;
    b=20;/*砞﹚a,b*/ 
    printf("ㄧ计ユ传玡a=%d, b=%d\n",a,b);
    swap(a,b);/*ㄧ计㊣ */ 
    printf("ㄧ计ユ传a=%d, b=%d\n",a,b);
	
    return 0;
}

void swap(int x,int y)/* ゼ肚 */ 
{
    int t;
    printf("ㄧ计ずユ传玡x=%d, y=%d\n",x,y);
    t=x;
    x=y;
    y=t;/* ユ传筁祘 */ 
    printf("ㄧ计ずユ传x=%d, y=%d\n",x,y);
}	

