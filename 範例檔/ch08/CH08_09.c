#include <stdio.h>
#include <stdlib.h> 

int main(void)
{ 
    enum animal{
        tiger,
        monkey,
        dog,
        cat};/* �w�q�C�|���A animal */
       
    enum animal zoo1,zoo2; /* �ŧi�C�|���Aanimal���ܼ� zoo1�Pzoo2 */
    zoo1=tiger;/* �Nzoo1���ȳ]�w��tiger */ 
    zoo2=dog;/* �Nzoo2���ȳ]�w��dog */ 
     
    printf("tiger=%d monkey=%d dog=%d cat=%d\n",tiger,monkey,dog,cat);
    printf("zoo1=%d zoo2=%d\n",zoo1,zoo2);
     
    return 0;
}

