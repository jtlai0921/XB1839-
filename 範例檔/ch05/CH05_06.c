#include <stdio.h>
#include <stdlib.h>

void CallByValue(int x);
void CallByAddress(int *x);

int main(void)
{
    int x = 10;

    printf( "�ǭȩI�s�e�G%d\n", x );
    CallByValue(x);
    printf( "�ǭȩI�s��G%d\n", x );
    CallByAddress(&x);
    printf( "�ǧ}�I�s��G%d\n", x );

    return 0;
}

/* �L�N�q����ơA���c�ܽd�ǭȩI�s */
void CallByValue(int x)
{
    x = 20;
}
 
/* �L�N�q����ơA���c�ܽd�ǧ}�I�s */
void CallByAddress(int *x)
{
    *x = 30;
}

