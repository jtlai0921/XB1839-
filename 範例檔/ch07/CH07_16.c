#include <stdio.h>
#include <stdlib.h>

int *min(int *,int *);	/* �ŧi�ǧ}�I�s���min()���쫬 */

int main(void)
{
    int a,b,*ptr;
   
    printf("�п�J��Ӿ��:"); 
    scanf("%d %d",&a,&b);
   
    ptr=min(&a,&b);/* ��ƻP���Ц^�ǭ� */ 
    printf("�̤p��=%d\n",*ptr);
   
    return 0;
}

int *min(int *a, int *b)
{
    if(*a>*b)
        return b;/*�^�ǫ��Э�*/ 
    else 
        return a;/*�^�ǫ��Э�*/ 
}

