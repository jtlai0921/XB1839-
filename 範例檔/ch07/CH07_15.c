#include <stdio.h>
#include <stdlib.h>

void toUpper(char*);  /* �r����j�g */
void toLower(char*);  /* �r����p�g */
 
int main(void)
{
    char str[80];/* �H�}�C�r���ŧi�r�� */ 

    printf( "�п�J�@�^��r��G" );
    scanf( "%s", str );
    toUpper(str);
    printf( "�r����j�g�G %s\n", str );
    toLower(str);
    printf( "�r����p�g�G %s\n", str );
    
    return 0;
}
 
/* �޼ơG�ǻ��r��   */
/* ���G�G�p�g��j�g */
void toUpper( char *str )/* �H�����ܼƱ����ѼƦr�� */ 
{
    int i = 0;
    int length;
    /* �p��}�C���� */
    while ( str[i]!= '\0' )
        i++;
    length = i;
 
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 96 && *(str+i) < 123 )
            *(str+i) = *(str+i) - 32;
}

/* �޼ơG�ǻ��r�� */
/* ���G�G�j�g��p�g */
void toLower( char *str )
{
    int i = 0;
    int length;
 
    /* �p��}�C���� */
    while ( str[i] != '\0' )
        i++;
    length = i;
 
    for( i = 0; i < length; i++ )
        if ( *(str+i) > 64 && *(str+i) < 91 )
            *(str+i) = *(str+i) + 32;
}

