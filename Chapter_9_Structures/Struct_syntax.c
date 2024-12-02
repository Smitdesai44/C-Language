#include<stdio.h>
#include<string.h>

struct employee
{
    int Id;
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1 ;
    e1.Id = 5;
    // e1.name = "Smit"; we cannot declare char array in this way in C
    // so we have declare it using function = "strcpy" 
    strcpy(e1.name, "Smit");
    e1.salary = 45.43;

    printf("\n%d %s %.2f", e1.Id, e1.name, e1.salary);
    return 0;
}

