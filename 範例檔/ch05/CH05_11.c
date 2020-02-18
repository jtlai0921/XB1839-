#include <stdio.h>
#include <stdlib.h>

int leap_year(int);/* �|�~��ƭ쫬�ŧi */ 

int main(void)
{
    int i,j,w;
    int year, month;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 
    printf("�п�J�褸�~��:");
    scanf("%d",&year);/* ��J�~�� */ 
    
    if (year >= 1900)   
    {
        printf("�п�J��~���:");
        scanf("%d",&month); /*��J���*/ 
        w=0;
  
        for(i=0;i<(year-1900);i++)
        {
            if (leap_year(i+1900))
                w=(w+366)%7;	       
            else
                w=(w+365)%7;
        } /*  �[�W�C�~���Ѽ� */ 
  
        if (leap_year(year))
            days[1]=29;	       
        else
            days[1]=28;/* �|�~�P�_�覡 */
	    
        for(i=0;i< month-1;i++)
            w=w+days[i]; /* ��~����p�� */ 
        w=w%7;
        
        printf("\n\n");
        printf("\t%d�~%d��\n\n",year,month);
        printf("  �@  �G  �T  �|  ��  ��  ��\n");
       
        for(j=1;j<=w;j++)
            printf("    "); /* �w�d�Ů� */ 
         
        for(i=1;i<=days[month-1];i++)
        {    
            printf(" %3d",i);  
            if(i%7==(7-w)%7)
                printf("\n"); /* ��F�g��N���� */ 
        } 
        printf("\n");
    }
    else
        printf("�п�J1900�~�H�᪺�~��\n");
       
    return 0;
}
 
int leap_year(int x) /* �|�~�P�_��� */ 
{
    if(x % 4 !=0)	 
        return 0;
    else if(x % 100 ==0 && x % 400!=0 )  
        return 0;  
    else      
        return 1;
}

