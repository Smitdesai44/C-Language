#include<stdio.h>

struct employee
{
    int eno;
    char name[30];
    int bpay , al , npay;
}e[10];

int main()
{
    int i , n ;

    printf("\nEnter number of employees = ");
    scanf("%d", &n);

    for( i = 0 ; i <= n ; i++)
    {
        printf("\nEnter employee ID = ");
        scanf("%d", &e[i].eno);

        printf("\nEnter name of employee = ");
        scanf("%s", &e[i].name);

        printf("\nEnter basic pay of employee = ");
        scanf("%d", &e[i].bpay);

        printf("\nEnter allowance = ");
        scanf("%d", &e[i].al);

        e[i].npay = e[i].bpay + e[i].al;
    }

    printf("\nEmployee ID\tName\t\tNet Pay");

    for(i = 0 ; i <= n ; i++)
    {
        printf("\n\n%d\t\t%s\t\t%d", e[i].eno , e[i].name , e[i].npay);
    }

    return 0 ;
}