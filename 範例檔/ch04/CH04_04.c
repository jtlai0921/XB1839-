/*²�����p����\��*/
#include <stdio.h>
#include <stdlib.h >
 
int main(void)
{
    float a,b; /* �ŧia,b���B�I���ܼ� */ 
    char op_key;/* �ŧiop_key���r���ܼ� */ 
     
    printf("�п�J��ӯB�I�ƼƦr�P+,-,*,/:,�p 200 * 30\n");
    scanf("%f %c %f", &a,&op_key,&b);/*��J�r���æs�J�ܼ�op_key*/
     
    switch(op_key)
    {
        case '+':      /*�p�Gop_key����'+'*/
            printf("\n%.2f %c %.2f = %.2f\n", a, op_key, b, a+b);
            break;      /*���Xswitch*/
        case '-':  /*�p�Gop_key����'-'*/
            printf("\n%.2f %c %.2f = %.2f\n", a, op_key, b, a-b);
            break;   /*���Xswitch*/
        case '*':  /*�p�Gop_key����'*'*/
            printf("\n%.2f %c %.2f = %.2f\n", a, op_key, b, a*b);
            break;      /*���Xswitch*/
        case '/':      /*�p�Gop_key����'/'*/
            printf("\n%.2f %c %.2f = %.2f\n", a, op_key, b, a/b);
            break;     /*���Xswitch*/
        default:       /*�p�Gop_key������ + - * / ����@��*/
            printf("�B�⦡���~\n");     
    }
  	
    return 0;	
}

