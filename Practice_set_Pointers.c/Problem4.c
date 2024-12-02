//  3 IS A EXAMPLE OF PASS THE VALUE BY REFERENCE

#include<stdio.h>
void change_to_ten_times(int*); // function prototype

// pass value by reference
void change_to_ten_times(int* j) // function definition
{
    *j = *j * 10 ; // multipling value of i
}

int main()
{
    int i = 5 ; // initialisation
    printf("\nThe value of i is %d", i); // value before multiplication
    change_to_ten_times(&i); // function calling 
    printf("\nThe value of i is %d", i); // printing value  after multiplication
    return 0 ;
}