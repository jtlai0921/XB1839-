#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct size /* �w�q���csize */
    {
        int length;
        int width;
        int height;
    };
    struct parcel /* �w�q�_�����cparcel */
    {
        float weight;
        struct size scale;		
    } large={35.8,{160,90,70}}; /* �ŧi���c�ܼ�large*/
   
    printf("�c�l���q:%0.1f ����\n",large.weight);  
    printf("�c�l����:%d ����\n",large.scale.length);
    printf("�c�l�e��:%d ����\n",large.scale.width);
    printf("�c�l����:%d ����\n",large.scale.height);
   
    return 0;
}

