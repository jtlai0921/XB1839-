#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    
    printf("�п�J���@���:"); 
    scanf("%d",&n);
    
    printf("�ϦV��X�����G:"); 
    
    while (n!=0) /* while�j�� */ 
    {
        printf("%d",n%10);/* �D�X�l�ƭ� */ 
        n/=10;
    }    
    printf("\n");
     
    return 0; 
}

