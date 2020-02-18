#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct name
    {
        char firstname[10];
        char lastname[10];
    }; /* 定義結構name */
   
    struct member /* 定義巢狀結構 member */
    {
        struct name member_name;
        char ID[10];
        int salary;
    } m1={ {"Helen","Wang"},"E121654321",35000};
    /* 設定結構變數m1的初值 */
   
    printf("------------------------------------------\n");
    printf("會員姓名: %s%s\n",m1.member_name.lastname,
    m1.member_name.firstname);  
    printf("身份證號碼:%s\n",m1.ID);
    printf("會員薪資:%d\n",m1.salary);
    printf("------------------------------------------\n");
   
    return 0;
}

