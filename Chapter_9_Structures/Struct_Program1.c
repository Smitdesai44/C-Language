// storing the data of three employees using structure array

#include<stdio.h>

struct employee
{
    int Id;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1, e2, e3;
    
    // we need to input data for three employees, so lets create an array of employees
    struct employee e[3];

    // input data for all three employees
    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter the data for employees %d: ", i + 1);
        printf("Id: ");
        scanf("%d", &e[i].Id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        printf("Name: \n");
        scanf("%s", e[i].name);
    }

    // print the data for all three employees
    for(int i= 0; i < 3; i++)
    {
        printf("\n\nEmployee %d: ", i + 1);
        printf("\nId: %d", e[i].Id);
        printf("\nSalary: %.2f", e[i].salary);
        printf("\nName: %s", e[i].name);
    }

    return 0;
}