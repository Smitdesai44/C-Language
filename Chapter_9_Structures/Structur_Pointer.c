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
    struct employee e;
    e.Id = 22;
    struct employee *ptr;
    ptr = &e;

    printf("%d", (*ptr).Id);

    // we can use arrow operator instead of (*ptr)

    // arrow operator ->
    printf("%d", ptr -> Id); // same as "printf("%d", (*ptr).Id);"

    return 0;
}