#include<stdio.h>
#include<stdlib.h>

int sum(int,int);/*�ŧi��ƭ쫬*/

int main(void)
{
 
    int x,y;
  
    printf("�п�J��ӼƦr:");
    /*��J�Ʀr*/
    scanf("%d %d",&x,&y);
    /*�b�{���ԭz���I�s���*/
    printf("%d+%d=%d\n",x,y,sum(x,y));
  
    return 0 ;
}
/*��ƥD��w�q*/
int sum(int score1,int score2)
{   
    int total;
    total=score1+score2;
    
    return total; /*�Ǧ^��̩M����� */ 
}

