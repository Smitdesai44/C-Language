// #include<stdio.h>

// struct employee 
// {
//     int salary;
//     float score;
// };

// int main()
// {
//     struct employee e1;
//     struct employee* ptr = &e1;

//     // (*ptr).salary = 456;
//     // (*ptr).score = 99;

//     ptr -> salary = 456;
//     ptr -> score  = 99;

//     printf("\nThe value of salary is %d and value of score is %.2f", ptr -> salary, ptr -> score);
    
//     return 0;
// }

// Same as above program using typedef ........

#include<stdio.h>

typedef struct emp 
{
    int salary;
    float score;
}employee;

int main()
{
     employee e1;
     employee* ptr = &e1;

    // (*ptr).salary = 456;
    // (*ptr).score = 99;

    ptr -> salary = 456;
    ptr -> score  = 99;

    printf("\nThe value of salary is %d and value of score is %.2f", ptr -> salary, ptr -> score);
    
    return 0;
}