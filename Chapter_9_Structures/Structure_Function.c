#include<stdio.h>
#include<string.h>

struct employee
{
    int Id;
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("Id is %d\nSalary is %.2f\nName is %s\n", e.Id, e.salary, e.name);
}

int main()
    {
        struct employee e1;
        e1.Id = 22;
        strcpy(e1.name, "Smit");
        e1.salary = 34000;

        show(e1);
        return 0;
    }