#include <stdio.h>
#include <stdlib.h>

void hanoi(int, int, int, int);	/* ��ƭ쫬�ŧi */

int main(void)
{  
    int j;
    
    printf("�п�J�L�l�ƶq�G");
    scanf("%d", &j);/* ��J�L�l�ƶq */ 
    hanoi(j,1, 2, 3);/* �I�s���j��� */ 
    
	return 0;
}
 
void hanoi(int n, int p1, int p2, int p3)
{  
    if (n==1) /* ���j�X�f */ 
        printf("�L�l�q %d ���� %d\n", p1, p3);
    else   /*���а���L�{ */ 
    {  
        hanoi(n-1, p1, p3, p2);
        printf("�L�l�q %d ���� %d\n", p1, p3);
        hanoi(n-1, p2, p1, p3);
   	}
}

